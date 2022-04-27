# Project Name
**0x13. C - More singly linked lists**

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
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

### Project Description
Learn more about linked lists and how they compare with arrays.

* **0. Print list** - Write a function that prints all the elements of a `listint_t` list. - `0-print_listint.c`.
* **1. List length** - Write a function that returns the number of elements in a linked `listint_t ` list. - `1-listint_len.c`.
* **2. Add node** - Write a function that adds a new node at the beginning  of a `listint_t` list. - `2-add_nodeint.c`.
* **3. Add node at the end** - Write a function that adds a new node at the end of a `listint_t ` list. - `3-add_nodeint_end.c`.
* **4. Free list** - Write a function that frees a `listint_t ` list. - `4-free_listint.c`.
* **5. Free** - Write a function that frees a `listint_t` list. - `5-free_listint2.c`.
* **6. Pop** - Write a function that deletes the head node of a `listint_t` linked list, and returns the head node’s data (n). - `6-pop_listint.c`.
* **7. Get node at index** - Write a function that returns the nth node of a `listint_t` linked list. - `7-get_nodeint.c`.
* **8. Sum list** - Write a function that returns the sum of all the data (n) of a `listint_t` linked list. - `8-sum_listint.c`.
* **9. Insert** - Write a function that inserts a new node at a given position. - `9-insert_nodeint.c`.
* **10. Delete at index** - Write a function that deletes the node at index `index` of a `listint_t` linked list. - `10-delete_nodeint.c`.
* **11. Reverse list** - Write a function that reverses a listint_t linked list. - `100-reverse_listint.c`.
* **12. Print (safe version)** - Write a function that prints a listint_t linked list. - `101-print_listint_safe.c`.
* **13. Free (safe version)** - Write a function that frees a listint_t list. - `102-free_listint_safe.c`.
* **14. Find the loop** - Write a function that finds the loop in a linked list. - `103-find_loop.c`.

### Collaborate

To collaborate, reach me through my email address wendymunyasi@gmail.com.