project('main', 'cpp',
  version: '0.1.0',
  default_options: [
    'cpp_std=c++20',
    'warning_level=3',
    'werror=false'
  ]
)

# Include directories
inc = include_directories('include')

# Source files
sources = files(
  'src/main.cpp',
)

# Executable
executable('main',
  sources,
  include_directories: inc,
  install: true
)
