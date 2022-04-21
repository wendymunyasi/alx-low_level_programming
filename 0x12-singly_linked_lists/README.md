# Project Name
**0x12. C - Singly linked lists**

## Author's Details
Name: *Wendy Munyasi.*

Email: *wendymunyasi@gmail.com*

Tel: *+254707240068.*

##  Requirements
*   Allowed editors: `vi`, `vim`, `emacs`.
*   All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
*   Your code should use the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`.
*   All your files should end with a new line.
*   You are not allowed to use global variables.
*   No more than 5 functions per file.
*   The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden unless stated othewise.
*   You are allowed to use the following macros:`va_start`, `va_arg` and `va_end`.
*   You are allowed to use `_putchar`.
*   The `main.c` files are used to test your functions, but you don’t have to push them to your repo.
*   The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `lists.h`.
*   All your header files should be include guarded.

##  More Info
*   Please use this data structure for this project:
```
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
```

### Project Description
Learn about linked lists and how they compare with arrays.

* **0. Print list** - Write a function that prints all the elements of a `list_t` list. - `0-print_list.c`.
* **1. List length** - Write a function that returns the number of elements in a linked `list_t` list. - `1-list_len.c`.
* **2. Add node** - Write a function that adds a new node at the beginning  of a `list_t` list. - `2-add_node.c`.
* **3. Add node at the end** - Write a function that adds a new node at the end of a `list_t` list. - `3-add_node_end.c`.
* **4. Free list** - Write a function that frees a `list_t` list. - `4-free_list.c`.

### Collaborate

To collaborate, reach me through my email address wendymunyasi@gmail.com.