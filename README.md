*This project has been created as part of the 42 curriculum by csampaio*

# Libft - Your Very First Own Library

## Description

Libft is my first project as a cadet at 42 school, which aims to recreate the standard C library (`libc`). This project comprises 43 functions, which are divided into 3 fundamental parts:

### Part 1 - Standard Libc Functions

In the first part, I recreated native C functions from the `<ctype.h>`, `<string.h>`, and `<stdlib.h>` libraries. It is divided into:

**Functions involving character verification and conversion:**
- `ft_isalpha`: Checks if a character is alphabetic (A-Z, a-z);
- `ft_isdigit`: Checks if a character is a digit (0–9);
- `ft_isalnum`: Checks if a character is alphanumeric (alphabetic or digit);
- `ft_isascii`: Checks if a character belongs to the 7-bit ASCII character set;
- `ft_isprint`: Checks if a character is printable (including space);
- `ft_toupper`: Converts a lower-case letter to its upper-case equivalent;
- `ft_tolower`: Converts an upper-case letter to its lower-case equivalent;
- `ft_atoi`: Converts an ASCII string representation of an integer into an actual integer value.

**Functions involving memory manipulation:**
- `ft_memset`: Fills a memory area with a constant byte value;
- `ft_bzero`: Erases data by setting a memory block's bytes to zero;
- `ft_memcpy`: Copies a specified number of bytes from a source memory area to a destination memory area;
- `ft_memmove`: Safely copies bytes between two memory areas, handling overlapping memory regions correctly;
- `ft_memchr`: Searches a block of memory for the first instance of a specific byte value;
- `ft_memcmp`: Compares two memory blocks byte-by-byte;
- `ft_calloc`: Allocates dynamic memory for an array and initializes all its bytes to zero.

**Functions involving string manipulation:**
- `ft_strlen`: Computes and returns the length of a string;
- `ft_strlcpy`: Copies a null-terminated string into a destination buffer with size boundaries to prevent buffer overflows;
- `ft_strlcat`: Concatenates a source string onto a destination buffer with size limits;
- `ft_strchr`: Locates the first occurrence of a character in a string;
- `ft_strrchr`: Locates the last occurrence of a character in a string;
- `ft_strncmp`: Compares two strings up to a maximum specified number of characters;
- `ft_strnstr`: Locates the first occurrence of a substring within a main string up to a specified length;
- `ft_strdup`: Duplicates a string by allocating dynamic memory and copying the original content.

---

### Part 2 - Additional Functions

In the second part, I developed utility functions that either do not exist in the standard libc or have specific behaviors or formats. It is divided into:

**Functions involving string manipulation and formatting:**
- `ft_substr`: Extracts a substring from a string starting at a specified index with a maximum length;
- `ft_strjoin`: Concatenates two strings into a newly allocated string;
- `ft_strtrim`: Removes specified prefix and suffix characters from a string;
- `ft_split`: Splits a string into an array of substrings using a given delimiter character;
- `ft_itoa`: Converts an integer value into its corresponding string representation;
- `ft_strmapi`: Creates a new string by applying a function to each character of an input string with its index;
- `ft_striteri`: Applies a function to each character of a string in-place by passing its index and pointer.

**Functions involving writing to file descriptors:**
- `ft_putchar_fd`: Writes a single character to a given file descriptor;
- `ft_putstr_fd`: Writes a string to a given file descriptor;
- `ft_putendl_fd`: Writes a string followed by a newline (`\n`) to a given file descriptor;
- `ft_putnbr_fd`: Writes an integer to a given file descriptor.

---

### Part 3 - Linked List Functions

In the third part, I worked on creating and manipulating singly linked lists:

- `ft_lstnew`: Allocates memory and initializes a new list node with the given content;
- `ft_lstsize`: Counts and returns the total number of elements in a linked list;
- `ft_lstlast`: Returns the last node of a linked list;
- `ft_lstadd_front`: Inserts a new node at the beginning of a linked list;
- `ft_lstadd_back`: Inserts a new node at the end of a linked list;
- `ft_lstdelone`: Deletes and frees a single list node using a custom deletion function;
- `ft_lstclear`: Deletes and frees a given node and all its subsequent nodes in the list;
- `ft_lstiter`: Iterates through a linked list and applies a function to the content of each node;
- `ft_lstmap`: Iterates through a list, applies a function to each node's content, and constructs a new list containing the results.

---

## Instructions

The `libft.h` header file centralizes all type declarations, structures, and function prototypes for the library. It allows any C program that includes this file to use the implemented functions.

The `Makefile` automates the compilation process into a static library (`libft.a`).

The library is compiled using `cc` with the `-Wall -Wextra -Werror` flags.

### Makefile Commands:
- `make` — Compiles the library and generates `libft.a`.
- `make clean` — Removes object files (`.o`).
- `make fclean` — Removes object files (`.o`) and the compiled library (`libft.a`).
- `make re` — Recompiles the entire project from scratch.

---

## Resources

### References & Links
- [Stack Overflow: Differences between memchr and strchr](https://stackoverflow.com/questions/4260109/differences-between-memchr-and-strchr)
- [YouTube Tutorial 1](https://www.youtube.com/watch?v=d6OjKV5_gCs)
- [YouTube Tutorial 2](https://www.youtube.com/watch?v=_byMWMrwEdU)
- [YouTube Tutorial 3](https://www.youtube.com/watch?v=fgAZuJXZSlA)
- [YouTube Tutorial 4](https://www.youtube.com/watch?v=8P7czTgvMtM)
- [Data Structures Course - Xavecode](https://www.youtube.com/watch?v=muesXvqzk4w)
- [Programiz Online Python Compiler](https://www.programiz.com/python-programming/online-compiler/)

### AI Usage Declaration
I used AI solely to understand some important and complex concepts related to memory manipulation, linked lists, and formatting documentation. All C source code and logic were implemented independently.

