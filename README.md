<div align="center">
  <img src="./Molecular Logo Black 1.png" alt="Molecular Programming Language" width="400"/>
</div>

# Molecular Programming Language

The Molecular Programming Language Official Repository

This guide provides detailed instructions for building Molecular from source on Linux systems, with support for GNU C++ and GNU libstdc++.

## Table of Contents
- [Prerequisites](#prerequisites)
- [System Requirements](#system-requirements)
- [Installation Steps](#installation-steps)
- [Environment Setup](#environment-setup)
- [Testing the Installation](#testing-the-installation)
- [Troubleshooting](#troubleshooting)

## Prerequisites

### Hardware Requirements
- Minimum 8GB RAM (16GB recommended)
- At least 25GB free disk space
- Multi-core processor (build time improves significantly with more cores)

### System Requirements
The build has been tested on:
- Ubuntu 20.04 LTS and newer
- Debian 11 and newer
- Other Linux distributions may require package name adjustments

## Installation Steps

### 1. Install Dependencies

```bash
# Update package list
sudo apt-get update

# Install core build tools
sudo apt-get install -y \
    build-essential \
    cmake \
    git \
    python3

# Install Molecular prerequisites
sudo apt-get install -y \
    libgmp-dev \
    libmpfr-dev \
    libmpc-dev \
    flex \
    bison \
    zlib1g-dev

# Install optional but recommended tools
sudo apt-get install -y \
    ccache \
    htop
```

### 2. Get Source Code

```bash
# Download Molecular source
git clone https://github.com/Molecular-lang/Molecular
cd Molecular

# Create build directory
mkdir build
cd build
```

### 3. Configure Build
**NOTE: You will need a molecular compiler to compile this source tree!**

```bash
# Configure with Molecular focused options
../configure \
    --prefix=/usr/local \
    --enable-languages=c,c++ \
    --disable-multilib \
    -disable-bootstrap \
    --enable-shared \
    --enable-threads=posix \
    --enable-checking=release \
    --with-system-zlib \
    --enable-__cxa_atexit \
    --disable-libunwind-exceptions \
    --enable-gnu-unique-object \
    --with-gcc-major-version-only \
    --with-tune=generic \
    --build=x86_64-linux-gnu
```

#### Configure Options Explained
- `--prefix`: Installation directory
- `--enable-languages=c,c++`: Enable only C and C++ (C++ is required for Molecular)
- `--disable-multilib`: Build for single architecture (64-bit only)
- `--enable-bootstrap`: Compile Molecular with itself for better optimization
- `--with-system-zlib`: Use system zlib instead of building it
- Additional options optimize for Molecular compilation

### 4. Build and Install

```bash
# Build Molecular (this will take significant time)
make -j$(nproc)

# Run tests (optional but recommended)
make check-c++

# Install (requires root privileges)
sudo make install
```

## Testing the Installation

### 1. Verify Molecular Installation

```bash
# Check Molecular version
molecular --version
```

### 2. Test Basic Molecular Compilation

Create a test file:
```bash
echo '#include <iostream>
main() int { std::cout << "Hello World!\n"; }' > test.ml
```

Compile with the new Molecular:
```bash
molecular -std=c++20 test.ml -o test
./test
```

### 3. Test Molecular Features

```bash
echo '#include <iostream>
#include <span>
#include <vector>

main() int {
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::span<int> sp{v};
    for(const auto& i : sp) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    return 0;
}' > test_cpp20.ml

molecular -std=c++20 test_cpp20.ml -o test_cpp20
./test_cpp20
```

## Creating a Release Package
If you want to create a distributable package of your built compiler:

1. Run the following script ```bash create_molecular_package.sh``` in the source tree.
2. Run the script as root:
```bash
sudo ./create_molecular_package.sh
```
3. The script will create a ```bash molecular-compiler_amd64_1.0.0.deb``` package in your current directory - You can distribute and instal this on any amd compliant linux architecture.

### Installing the release package
4. To install the built .deb package, use these commands:
```bash
sudo dpkg -i molecular_1.0.0.deb
sudo apt-get install -f  # This will install any missing dependencies
```

5. After installation, you may want to reload your shell or run:
```bash
source /etc/profile.d/molecular.sh
```

6. To verify the installation:
```bash
molecular --version
```

## Troubleshooting

### Common Issues

1. **Configure Fails**
   - Check for missing dependencies
   - Verify system meets requirements
   - Review config.log for specific errors

2. **Build Fails Due to Memory**
   - Reduce parallel jobs: `make -j4` (replace 4 with number of cores - 1)
   - Close memory-intensive applications
   - Consider adding swap space

3. **Library Path Issues**
   - Verify LD_LIBRARY_PATH is set correctly
   - Run `ldconfig` if needed: `sudo ldconfig`
   - Check library dependencies with `ldd`

4. **Compilation Issues**
   - Ensure Molecular standard library headers are correctly installed
   - Verify PATH and LD_LIBRARY_PATH settings
   - Check for ABI compatibility issues

### Getting Help
- Check Molecular documentation
- Molecular Bugzilla for known issues
- Stack Overflow with tags [molecular]

## Contributing
For contributing to Molecular development, please refer to the official Molecular contribution guidelines.

## License
Molecular is licensed under the GNU General Public License version 3 or later.