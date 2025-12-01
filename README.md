# Enhanced Libft - Custom C Library

> ⚠️ **Note**: This is a post-submission, modified version of the 42 libft project. It will **NOT** pass Moulinette as libft project, but it can be used in later projects as your evolved libft.

## Overview

This repository contains my personal, enhanced version of the libft library - originally developed as part of the 42 School curriculum. After successfully completing the original project, I've extensively modified and expanded this library to serve as a robust foundation for other projects I did in the campus.

**Key additions:**
- `ft_printf` - custom implementation with format specifiers (c, s, p, d, i, u, x, X, %)
- Flag support for ft_printf: `#` (alternate form), `+` (force sign), ` ` (space before positive)
- `ft_get_next_line` - reads one line at a time from file descriptors with configurable buffer size
- Enhanced output functions returning byte counts for easier tracking
- Base conversion utilities for flexible number representation
- Advanced string splitting with custom predicates (`ft_split_if`)
- Array manipulation utilities (length, memory management, search)

## Build Instructions

### Prerequisites

- GCC or Clang compiler
- Make utility
- Unix-like environment (Linux/macOS)

### Compilation

```bash
# Clone the repository
git clone <your-repo-url> libft
cd libft

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
│   ├── ft_get_next_line.h      # Get next line functionality
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

## Function Reference

### Character Classification
- `ft_isalpha` - checks if character is alphabetic
- `ft_isdigit` - checks if character is a digit
- `ft_isalnum` - checks if character is alphanumeric
- `ft_isascii` - checks if character is ASCII
- `ft_isprint` - checks if character is printable
- `ft_isspace` - checks if character is whitespace

### String Manipulation
- `ft_strlen` - calculates string length
- `ft_strchr` - locates first occurrence of character in string
- `ft_strrchr` - locates last occurrence of character in string
- `ft_strncmp` - compares strings up to n characters
- `ft_strnstr` - locates substring in string
- `ft_strdup` - duplicates string
- `ft_substr` - extracts substring
- `ft_strjoin` - concatenates two strings
- `ft_strtrim` - trims characters from both ends
- `ft_split` - splits string by delimiter character
- `ft_split_if` - splits string using custom predicate function
- `ft_strmapi` - applies function to each character with index
- `ft_striteri` - iterates over string with function
- `ft_strlcpy` - size-bounded string copying
- `ft_strlcat` - size-bounded string concatenation

### Memory Operations
- `ft_memset` - fills memory with constant byte
- `ft_bzero` - zeros memory area
- `ft_memcpy` - copies memory area
- `ft_memmove` - copies memory area (handles overlaps)
- `ft_memchr` - scans memory for character
- `ft_memcmp` - compares memory areas
- `ft_calloc` - allocates and zeros memory

### Character Conversion
- `ft_toupper` - converts to uppercase
- `ft_tolower` - converts to lowercase
- `ft_atoi` - converts string to integer
- `ft_itoa` - converts integer to string

### Output Functions
All output functions return the number of bytes written:
- `ft_putchar_fd` - outputs character to file descriptor
- `ft_putstr_fd` - outputs string to file descriptor
- `ft_putendl_fd` - outputs string with newline to file descriptor
- `ft_putnbr_base_fd` - outputs integer in specified base
- `ft_putsizet_base_fd` - outputs size_t in specified base
- `ft_putuint_base_fd` - outputs unsigned int in specified base

### Array Utilities
- `ft_arraylen` - returns length of null-terminated string array
- `ft_array_free` - frees null-terminated string array
- `ft_int_in_array` - checks if integer exists in array or integers

### File I/O
- `ft_get_next_line` - reads one line at a time from a file descriptor (supports multiple file descriptors, configurable BUFFER_SIZE)

### Formatted Output
- `ft_printf` - formatted output with support for multiple format specifiers and flags

## License

This project is developed for educational purposes as part of the 42 School curriculum and personal development.

## Disclaimer

This library is **not intended for 42 libft project submissions**, but you are free to use it as your own libft in the further projects.