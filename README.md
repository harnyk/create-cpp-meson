# C++20 Meson Template

A minimal, modern C++20 project template using Meson build system with VS Code debugging support.

## Features

- **C++20 Standard**: Modern C++ features enabled
- **Meson Build System**: Fast, user-friendly build configuration
- **Header-only Library Structure**: Example header library in `include/`
- **VS Code Integration**: Pre-configured debugging and build tasks
- **Cross-platform**: Works on Linux, macOS, and Windows

## Requirements

- C++20 compatible compiler (GCC 10+, Clang 10+, MSVC 2019+)
- [Meson](https://mesonbuild.com/) (0.60+)
- [Ninja](https://ninja-build.org/)
- (Optional) [degit](https://github.com/Rich-Harris/degit) for bootstrapping

## Quick Start

### Using degit (Recommended)

```bash
# Install degit if you haven't already
npm install -g degit

# Create a new project from this template
degit harnyk/create-cpp-meson my-project
cd my-project

# Set up build directory
meson setup builddir

# Compile
meson compile -C builddir

# Run
./builddir/main
```

### Using GitHub Template

1. Click "Use this template" on GitHub
2. Clone your new repository
3. Follow the build steps above

### Manual Clone

```bash
git clone https://github.com/harnyk/create-cpp-meson.git my-project
cd my-project
rm -rf .git
git init
```

## Build Commands

```bash
# Initial setup
meson setup builddir

# Compile
meson compile -C builddir

# Run
./builddir/main

# Reconfigure (after changing meson.build)
meson setup --reconfigure builddir

# Clean build
rm -rf builddir
meson setup builddir
```

## VS Code Debugging

Press `F5` to start debugging. The configuration automatically:
- Builds the project before debugging
- Sets up GDB with pretty-printing
- Provides standard debug controls (F10 step over, F11 step into, etc.)

## Project Structure

```
.
├── include/
│   └── utils.hpp          # Header-only library
├── src/
│   └── main.cpp           # Application entry point
├── .vscode/
│   ├── launch.json        # Debug configuration
│   └── tasks.json         # Build tasks
├── meson.build            # Build configuration
├── .gitignore
└── README.md
```

## Adding Source Files

Edit `meson.build` and add your files to the `sources` list:

```meson
sources = files(
  'src/main.cpp',
  'src/myfile.cpp',
)
```

## Adding Headers

Place header files in `include/` directory. They're automatically available to your source files.

## Customization

1. **Change project name**: Edit `project('main', ...)` in `meson.build`
2. **Change executable name**: Edit `executable('main', ...)` in `meson.build`
3. **Update debug config**: Edit `.vscode/launch.json` to match your executable name
4. **Add dependencies**: Use Meson's `dependency()` function in `meson.build`

## License

This template is provided as-is for any use.
