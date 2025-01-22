#!/bin/bash

# Exit on error
set -e

# Package details
PACKAGE_NAME="molecular-compiler"
PACKAGE_VERSION="1.0.0"
ARCH="amd64"
MAINTAINER="Molecular Team <phrunsys@molecular-lang.org>"
DESCRIPTION="Molecular Programming Language Compiler"

# Create package directory structure
create_package_structure() {
    echo "Creating package structure..."
    
    mkdir -p "${PACKAGE_NAME}_${ARCH}_${PACKAGE_VERSION}"
    cd "${PACKAGE_NAME}_${ARCH}_${PACKAGE_VERSION}"
    mkdir -p DEBIAN
    mkdir -p usr/local
    
    echo "Copying compiler files..."
    if [ -x "/usr/local/bin/molecular" ]; then
        cp -r /usr/local/bin usr/local/
        cp -r /usr/local/lib usr/local/
        cp -r /usr/local/include usr/local/
        cp -r /usr/local/share usr/local/
    else
        echo "Error: Molecular compiler not found in /usr/local"
        exit 1
    fi
}

# Create control file
create_control_file() {
    echo "Creating control file..."
    
    cat > DEBIAN/control << 'EOF'
Package: molecular-compiler
Version: 1.0.0
Architecture: amd64
Maintainer: Molecular Team <phrunsys@molecular-lang.org>
Description: Molecular Programming Language Compiler
 Molecular is a modern AI systems programming language
 built on GCC infrastructure.
 .
 This package provides the Molecular compiler and runtime.
Priority: optional
Section: development
Homepage: https://molecular-lang.org
Depends: libc6 (>= 2.27), libgmp10, libmpc3, libmpfr6, zlib1g
EOF
}

# Create postinst script
create_postinst_script() {
    echo "Creating post-installation script..."
    
    cat > DEBIAN/postinst << 'EOF'
#!/bin/bash
set -e

# Run ldconfig
ldconfig

# Create molecular profile script
cat > /etc/profile.d/molecular.sh << EOL
export PATH=/usr/local/bin:\$PATH
export LD_LIBRARY_PATH=/usr/local/lib:/usr/local/lib64:\$LD_LIBRARY_PATH
EOL

chmod 644 /etc/profile.d/molecular.sh
exit 0
EOF

    chmod 755 DEBIAN/postinst
}

# Create prerm script
create_prerm_script() {
    echo "Creating pre-removal script..."
    
    cat > DEBIAN/prerm << 'EOF'
#!/bin/bash
set -e
rm -f /etc/profile.d/molecular.sh
exit 0
EOF

    chmod 755 DEBIAN/prerm
}

# Set correct permissions
set_permissions() {
    echo "Setting package permissions..."
    
    # Set ownership to root
    chown -R root:root .
    
    # Set correct permissions
    find . -type d -exec chmod 755 {} \;
    find . -type f -exec chmod 644 {} \;
    find usr/local/bin -type f -exec chmod 755 {} \;
    chmod 755 DEBIAN/postinst DEBIAN/prerm
}

# Build the package
build_package() {
    echo "Building Debian package..."
    
    cd ..
    dpkg-deb --build "${PACKAGE_NAME}_${ARCH}_${PACKAGE_VERSION}"
    
    if [ $? -eq 0 ]; then
        # Move the package to the original directory
        mv "${PACKAGE_NAME}_${ARCH}_${PACKAGE_VERSION}.deb" ../
        echo "Package created successfully: ${PACKAGE_NAME}_${ARCH}_${PACKAGE_VERSION}.deb"
    else
        echo "Failed to create package"
        exit 1
    fi
}

# Main function
main() {
    # Check if running as root
    if [ "$EUID" -ne 0 ]; then
        echo "Please run as root"
        exit 1
    fi
    
    # Check if dpkg-deb is installed
    if ! command -v dpkg-deb &> /dev/null; then
        echo "dpkg-deb not found. Please install dpkg."
        exit 1
    fi
    
    # Create working directory
    WORK_DIR="$(pwd)/molecular_package_build"
    rm -rf "$WORK_DIR"
    mkdir -p "$WORK_DIR"
    cd "$WORK_DIR"
    
    create_package_structure
    create_control_file
    create_postinst_script
    create_prerm_script
    set_permissions
    build_package
    
    # Cleanup
    cd ..
    rm -rf "$WORK_DIR"
    
    echo "Package creation completed!"
    echo "To install on another system:"
    echo "sudo dpkg -i ${PACKAGE_NAME}_${ARCH}_${PACKAGE_VERSION}.deb"
    echo "sudo apt-get install -f"
}

# Run main function
main