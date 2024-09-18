# Libft - My First C Library

Welcome to my implementation of the **Libft** project! This library is a collection of essential C functions, aimed to mimic the standard C library (libc) and provide useful utilities for future projects at 42. This project has been one of the cornerstones of my programming journey, and I’ve put a lot of thought into its structure and implementation.

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Getting Started](#getting-started)
- [Libc Functions](#libc-functions)
- [Additional Functions](#additional-functions)
- [Bonus Part](#bonus-part)
- [Makefile](#makefile)
- [Coding Decisions](#coding-decisions)
- [Testing](#testing)
- [Conclusion](#conclusion)

## Introduction

The **Libft** project is all about understanding how the standard C library works by writing it from scratch. It covers a wide range of utility functions—everything from string manipulation, memory handling, and file descriptor functions, to linked lists and more. 

This project helped me solidify my understanding of C and gave me an opportunity to create reusable tools for future projects. It’s not just about writing functions; it’s about writing them well, ensuring they are error-free, memory-leak-free, and efficient.

## Features

- **Standard C Library functions**: Re-implemented common libc functions such as `strlen`, `memset`, and `strcpy`.
- **Additional Utility functions**: Added extra functions for common tasks like string splitting (`ft_split`), integer conversion (`ft_itoa`), and more.
- **Bonus Linked List functions**: Implemented linked list operations to extend the library’s functionality.
- **Memory and Error Handling**: Focused on efficient memory allocation and ensured no leaks using tools like `valgrind`.

## Getting Started

To use this library in your project, simply clone the repository and compile it using the provided Makefile.

```bash
git clone https://github.com/f-ras-42Course/libft.git
cd libft
make
```

This will create the libft.a static library, which you can link to your C projects. To clean up object files or rebuild, you can use the following:

```bash
make clean   # Removes object files
make fclean  # Removes object files and the library
make re      # Rebuilds everything from scratch
```

## Libc Functions

I began the project by re-implementing a set of common functions from the **libc** library. These functions work just like the originals but are prefixed with `ft_` to differentiate them. Below are some of the key functions:

- **Character checking and conversion**:  
  `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_toupper`, `ft_tolower`
  
- **String operations**:  
  `ft_strlen`, `ft_strcpy`, `ft_strncpy`, `ft_strcat`, `ft_strchr`, `ft_strrchr`
  
- **Memory manipulation**:  
  `ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_bzero`, `ft_memcmp`
  
- **Other utilities**:  
  `ft_atoi` - My implementation of the classic string-to-integer conversion function, handling various edge cases (like whitespace and signs).

## Additional Functions

After completing the libc functions, I extended the library with additional useful functions:

- **ft_substr**: This function extracts a substring from a given string. It was crucial to handle out-of-bounds access cleanly, and I added safeguards to ensure safe memory allocations.
- **ft_strjoin**: A helper function that joins two strings into one. In this function, I made careful decisions about memory allocation, ensuring the right amount of space was allocated for the result string.
- **ft_split**: One of the trickier ones—splitting a string into an array based on a delimiter. I ensured that my function is robust and handles edge cases like consecutive delimiters and empty strings.
- **ft_itoa**: Converts an integer into its string representation. Handling negative numbers, including `INT_MIN`, was a fun challenge.
- **ft_strtrim**: Trims specified characters from the start and end of a string. Here, I focused on trimming efficiently by avoiding unnecessary string traversal.

## Bonus Part

I decided to go beyond the mandatory functions by implementing a suite of linked list functions. Working with the `t_list` structure allowed me to practice dynamic memory management further.

### Bonus Functions:
- `ft_lstnew` - Creates a new list element.
- `ft_lstadd_front` - Adds an element to the beginning of a list.
- `ft_lstadd_back` - Adds an element to the end of a list.
- `ft_lstsize` - Counts the number of elements in a list.
- `ft_lstlast` - Retrieves the last element of a list.
- `ft_lstdelone`, `ft_lstclear` - Functions to delete and free elements or entire lists.
- `ft_lstiter`, `ft_lstmap` - These apply a function to each element of a list and create a new list from applying a function to each element, respectively.

Implementing the list functions was a valuable exercise, and it was especially satisfying to see how modular my code had become by the time I got here. I focused on ensuring that the list manipulation functions could handle memory safely and clean up appropriately when needed.

## Makefile

The **Makefile** has the standard rules required by the project, including:

- `all` - Compiles the library.
- `clean` - Removes object files.
- `fclean` - Removes both object files and the library.
- `re` - Rebuilds everything.
- `bonus` - Compiles the bonus part, adding the linked list functions to the library.

I also made sure that the **Makefile** was written efficiently, avoiding unnecessary recompilations by using proper dependencies. I used flags like `-Wall -Wextra -Werror` to ensure strict compilation and clean code.

## Coding Decisions

Throughout the development of **Libft**, I made some deliberate design choices:

1. **Modularity**: Functions were split into small, manageable parts. Helper functions were made `static` to limit their scope, ensuring better encapsulation and avoiding polluting the global namespace.
2. **Error Handling**: I ensured that functions gracefully handle errors like NULL pointers, and I used `malloc` efficiently, always checking for successful memory allocation.
3. **Memory Management**: I ensured that no function leaks memory by freeing any dynamically allocated memory when needed. This was tested extensively using `valgrind`.
4. **Norm Compliance**: Of course, all the code adheres to the **42 Norm**, ensuring readability and consistency across the project.

## Testing

While the project doesn’t require submission of tests, I developed a set of **unit tests** to verify the functionality of each function. Using custom test programs allowed me to quickly check edge cases, such as:

- Handling NULL pointers.
- Overlapping memory regions in `ft_memmove`.
- Trimming strings with only whitespace in `ft_strtrim`.

I encourage you to [try the tests yourself](https://github.com/f-ras-42Course-EXTRAS/LibftTesty) or create your own as you explore the library.

## Conclusion

This **Libft** project has been an essential step in my journey towards mastering C programming. It laid the groundwork for understanding how the standard library functions operate and gave me the tools to build reusable code for future projects.

Feel free to fork and adapt this library to your needs. I plan to expand it over time, so stay tuned for updates!

---
[Made with ❤️ by Ferry](https://github.com/f-ras)
