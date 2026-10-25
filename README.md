*This project has been created as part of the 42 curriculum by hsalahal.*

## Description
`libft` is an individual project at 42 School that requires us to rewrite a set of standard C library functions from scratch, along with additional utility functions that can be reused in future programming projects throughout the curriculum. 

The main goals of this project are:
* To understand how standard functions work under the hood (e.g., memory management, string manipulation, type checking).
* To build a reliable, thoroughly tested custom C library (`libft.a`) complete with custom header definitions (`libft.h`).
* To practice robust low-level systems programming in C, enforcing strict memory safety and adherence to the 42 Norm.

The library is categorized into three primary modules:
1. **Libc Functions:** Re-implementations of standard library functions like `ft_strlen`, `ft_memset`, `ft_memcpy`, `ft_strlcat`, `ft_atoi`, `ft_calloc`, etc.
2. **Additional Functions:** Non-standard or auxiliary utility functions designed to simplify string and memory manipulation (e.g., `ft_substr`, `ft_strjoin`, `ft_striteri`, `ft_putchar_fd`, `ft_putendl_fd`).
3. **Bonus Functions (Linked Lists):** Advanced data structure utilities for managing linked lists using `t_list` nodes (e.g., `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstmap`).

---

## Instructions

### Prerequisites
* A C compiler (such as `gcc` or `clang`) supporting standard C99/C11 flags (`-Wall -Wextra -Werror`).
* The GNU `make` utility.

### Compilation
To compile the static library (`libft.a`), clone the repository and run `make` at the root directory:

```bash
make
