# Enhanced Libft - Custom C Library

> ⚠️ **Note**: This is a post-submission, modified version of the 42 libft project. It will **NOT** pass Moulinette as libft project, but it can be used in later projects as your evolved libft.

## Overview

This repository contains my personal, enhanced version of the libft library - originally developed as part of the 42 School curriculum. After successfully completing the original project, I've extensively modified and expanded this library to serve as a robust foundation for other projects I did in the campus.

**Key additions:**
- `ft_printf` - custom implementation with format specifiers (c, s, p, d, i, u, x, X, %)
- Flag support for ft_printf: `#` (alternate form), `+` (force sign), ` ` (space before positive)
- Enhanced output functions returning byte counts for easier tracking
- Base conversion utilities for flexible number representation

## Build Instructions

### Prerequisites

- GCC or Clang compiler
- Make utility
- Unix-like environment (Linux/macOS)

### Compilation

```bash
# Clone the repository
git clone <your-repo-url>
cd enhanced-libft

# Compile the library
make

# This creates libft.a static library file
```

### Makefile Targets

```bash
make          # Compile the library (creates libft.a)
make clean    # Remove object files
make fclean   # Remove object files and libft.a
make re       # Clean and recompile
```

### Usage in Your Projects

```bash
# Compile your project with the library
gcc -Wall -Wextra -Werror your_file.c -L. -lft -o your_program

# Or include in your Makefile
LDFLAGS = -L./libft -lft
```

## Project Structure

```
libft/
├── src/
│   ├── ft_*.c                  # Core libft functions
│   └── ft_printf_handlers/     # Printf format handlers
├── includes/
│   ├── libft.h                 # Main header
│   ├── ft_printf_handlers.h    # Printf handlers
│   └── base_constants.h        # Number base definitions
├── Makefile
├── README.md
└── libft.a                     # Compiled library (after make)
```

## Usage Example

```c
#include "libft.h"

int main(void)
{
    // String manipulation
    char *str = ft_strdup("Hello, enhanced libft!");
    ft_putstr_fd(str, 1);
    free(str);

    // ft_printf usage
    ft_printf("Number: %d, Hex: %#x, Pointer: %p\n", 42, 255, &str);
    ft_printf("With flags: %+d, % d\n", 42, 42);

    return (0);
}
```

## License

This project is developed for educational purposes as part of the 42 School curriculum and personal development.

## Disclaimer

This library is **not intended for 42 libft project submissions**, but you are free to use it as your own libft in the further projects.