<div align="center">
  <img src="./Molecular Logo Black 1.png" alt="Molecular Programming Language" width="400"/>
</div>

# Molecular

The Molecular Programming Language Official Repository

This guide provides detailed instructions for building LLVM and Molecular from source on Linux systems, with support for C++ and libc++.

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
- At least 40GB free disk space
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
    ninja-build \
    git \
    python3 \
    python3-pip \
    python3-dev \
    pkg-config \
    libssl-dev

# Install required libraries
sudo apt-get install -y \
    zlib1g-dev \
    libedit-dev \
    libxml2-dev \
    libtinfo-dev \
    libsqlite3-dev

# Install optional but recommended tools
sudo apt-get install -y \
    ccache \
    lld \
    htop
```

### 2. Get Source Code

```bash
# Clone LLVM repository
git clone https://github.com/llvm/llvm-project.git
cd llvm-project

# Rename clang directory to molecular
mv clang molecular

# Create build directory
mkdir build
cd build
```

### 3. Configure Build

```bash
# Configure with CMake
cmake -G Ninja \
    -DLLVM_ENABLE_PROJECTS="molecular" \
    -DLLVM_ENABLE_RUNTIMES="libcxx;libcxxabi" \
    -DCMAKE_BUILD_TYPE=Release \
    -DLLVM_TARGETS_TO_BUILD="X86" \
    -DLLVM_ENABLE_ASSERTIONS=OFF \
    -DCMAKE_INSTALL_PREFIX=/usr/local/molecular \
    ../llvm
```

#### CMake Options Explained
- `LLVM_ENABLE_PROJECTS`: Specifies Molecular as the main project
- `LLVM_ENABLE_RUNTIMES`: Specifies which runtime libraries to build
- `CMAKE_BUILD_TYPE`: Build type (Release for optimized build)
- `LLVM_TARGETS_TO_BUILD`: Target architectures (X86 for standard Intel/AMD)
- `CMAKE_INSTALL_PREFIX`: Installation directory (changed to /usr/local/molecular)

### 4. Build and Install

```bash
# Build LLVM/Molecular (this will take significant time)
ninja

# Install (requires root privileges)
sudo ninja install
```

### 5. Rename Binary Files
```bash
# Navigate to installation binary directory
cd /usr/local/molecular/bin

# Rename clang binaries to molecular
sudo mv clang molecular
sudo mv clang++ molecular++
sudo mv clang-cpp molecular-cpp

# Create symbolic links if needed
sudo ln -s molecular clang
sudo ln -s molecular++ clang++
```

## Environment Setup

Add the following to your `~/.bashrc` or equivalent:

```bash
# Add Molecular to your PATH
export PATH=/usr/local/molecular/bin:$PATH

# Add Molecular libraries to library path
export LD_LIBRARY_PATH=/usr/local/molecular/lib:$LD_LIBRARY_PATH

# Set Molecular home directory
export MOLECULAR_HOME=/usr/local/molecular
```

Apply the changes:
```bash
source ~/.bashrc
```

## Testing the Installation

### 1. Verify Molecular Installation

```bash
# Check Molecular version
molecular++ --version
```

### 2. Test Basic Compilation

Create a test file:
```bash
echo '#include <iostream>
int main() { std::cout << "Hello World!\n"; }' > test.cpp
```

Compile with libc++:
```bash
molecular++ -stdlib=libc++ test.cpp -o test
./test
```

### 3. Test Molecular Syntax

```bash
# Create a test file with Molecular syntax
echo 'main() int { 
    println("Hello from Molecular!");
    return 0; 
}' > test.mol

# Compile Molecular code
molecular++ test.mol -o test
./test
```

## Troubleshooting

### Common Issues

1. **CMake Configuration Fails**
   - Ensure all dependencies are installed
   - Check CMake version (`cmake --version`)
   - Verify you're in the correct directory

2. **Build Fails Due to Memory**
   - Reduce parallel jobs: `ninja -j4` (replace 4 with number of cores - 1)
   - Close memory-intensive applications
   - Consider adding swap space

3. **Library Path Issues**
   - Verify LD_LIBRARY_PATH is set correctly
   - Run `ldconfig` if needed: `sudo ldconfig`

4. **Binary Renaming Issues**
   - Check file permissions
   - Verify original files exist before renaming
   - Ensure no processes are using the files

### Getting Help
- Check project issues on GitHub
- Join our Discord community
- Stack Overflow with tags: [llvm] [molecular]

## Contributing
Feel free to submit issues and enhancement requests!

## License
This installation guide is available under the --------------------- (Coming briefly)
