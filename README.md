_This project has been created as part of the 42 curriculum by esaleh._

# libft

## Description

**libft** is a C library that reimplements essential standard library functions from libc, along with additional utility functions. The library is designed to deepen understanding of fundamental C programming concepts including memory management, string manipulation, and data structures.

The project is divided into two parts:

- **Mandatory**: Core libc function reimplementations plus common helpers not found in the standard library
- **Bonus**: Singly linked-list manipulation functions

The compiled library is a static archive (`libft.a`) that can be linked into other projects together with its header `libft.h`.

## Instructions

### Compilation

Compile the mandatory part:

```bash
make
```

Compile both mandatory and bonus parts:

```bash
make bonus
```

Clean object files:

```bash
make clean
```

Remove object files and the library:

```bash
make fclean
```

Rebuild from scratch:

```bash
make re
```

### Usage

Include the header in your C files:

```c
#include "libft.h"
```

Compile your project and link against libft:

```bash
gcc -o your_program your_program.c -L. -lft
```

## Library Overview

### Character checks (`<ctype.h>` reimplementations)

| Function | Purpose |
| --- | --- |
| `ft_isalpha` | Test for an alphabetic character |
| `ft_isdigit` | Test for a decimal digit |
| `ft_isalnum` | Test for an alphanumeric character |
| `ft_isascii` | Test whether a value fits in the 7-bit ASCII range |
| `ft_isprint` | Test for a printable character, including space |
| `ft_toupper` | Convert a lowercase letter to uppercase |
| `ft_tolower` | Convert an uppercase letter to lowercase |

### Memory

| Function | Purpose |
| --- | --- |
| `ft_memset` | Fill a memory block with a constant byte |
| `ft_bzero` | Zero out a memory block |
| `ft_memcpy` | Copy bytes between non-overlapping blocks |
| `ft_memmove` | Copy bytes between blocks that may overlap |
| `ft_memchr` | Locate the first occurrence of a byte in a block |
| `ft_memcmp` | Compare two memory blocks byte by byte |
| `ft_calloc` | Allocate and zero an array |

### Strings (`<string.h>` reimplementations)

| Function | Purpose |
| --- | --- |
| `ft_strlen` | Return the length of a string |
| `ft_strlcpy` | Size-bounded string copy |
| `ft_strlcat` | Size-bounded string concatenation |
| `ft_strchr` | Locate the first occurrence of a character |
| `ft_strrchr` | Locate the last occurrence of a character |
| `ft_strncmp` | Compare up to `n` bytes of two strings |
| `ft_strnstr` | Locate a substring within the first `n` bytes |
| `ft_strdup` | Allocate a copy of a string |

### String helpers (allocating)

| Function | Purpose |
| --- | --- |
| `ft_substr` | Allocate a substring of a string |
| `ft_strjoin` | Allocate the concatenation of two strings |
| `ft_strtrim` | Allocate a copy with leading/trailing characters removed |
| `ft_split` | Split a string on a delimiter into a `NULL`-terminated array |
| `ft_strmapi` | Allocate a string built by applying a function to each index/character |
| `ft_striteri` | Apply a function in place to each index/character |

### Conversions

| Function | Purpose |
| --- | --- |
| `ft_atoi` | Convert the initial portion of a string to an `int` |
| `ft_itoa` | Allocate the string representation of an `int` |

### File-descriptor output

| Function | Purpose |
| --- | --- |
| `ft_putchar_fd` | Write a character to a file descriptor |
| `ft_putstr_fd` | Write a string to a file descriptor |
| `ft_putendl_fd` | Write a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Write an integer to a file descriptor |

### Bonus — linked lists

Operates on `t_list` nodes (`void *content` + `struct s_list *next`).

| Function | Purpose |
| --- | --- |
| `ft_lstnew` | Allocate a new node holding the given content |
| `ft_lstadd_front` | Insert a node at the head of the list |
| `ft_lstadd_back` | Append a node at the tail of the list |
| `ft_lstsize` | Count the nodes in a list |
| `ft_lstlast` | Return the last node of a list |
| `ft_lstdelone` | Free one node's content and the node |
| `ft_lstclear` | Free and delete every node of a list |
| `ft_lstiter` | Apply a function to each node's content |
| `ft_lstmap` | Build a new list by applying a function to each node's content |

## Resources

### References

- C standard library documentation (Linux/BSD man pages)
- 42 curriculum materials
- POSIX.1 specifications for the corresponding libc functions

### AI usage

AI was not used for any of the function implementations, the header, or the Makefile — those were written independently from the function specifications and standard library behavior. It was used only to review and tighten the wording and structure of this README.
