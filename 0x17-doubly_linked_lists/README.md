# Project Name
**0x17. C - Doubly linked lists**

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
*   The only C standard library functions allowed are `malloc`, `free`, `printf` and `exit`.
*   The `main.c` files are used to test your functions, but you don’t have to push them to your repo.
*   The prototypes of all your functions should be included in your header file called `lists.h`.
*   All your header files should be include guarded.

##  More Info
*   Please use this data structure for this project:
```
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Project Description
Learn about doubly linked lists and how to use them.

* **0. Print list** - Write a function that prints all the elements of a `dlistint_t` list. - `0-print_dlistint.c`.
* **1. List length** - Write a function that returns the number of elements in a linked `dlistint_t` list. - `1-dlistint_len.c`.
* **2. Add node** - Write a function that adds a new node at the beginning of a `dlistint_t` list. - `2-add_dnodeint.c`.
* **3. Add node at the end** - Write a function that adds a new node at the end of a `dlistint_t` list. - `3-add_dnodeint_end.c`.
* **4. Free list** - Write a function that frees a `dlistint_t list`. - `4-free_dlistint.c`.
* **5. Get node at index** - Write a function that returns the nth node of a `dlistint_t` linked list. - `5-get_dnodeint.c`.
* **6. Sum list** - Write a function that returns the sum of all the data (n) of a `dlistint_t` linked list. - `6-sum_dlistint.c`.
* **7. Insert at index** - Write a function that inserts a new node at a given position. - `7-insert_dnodeint.c`, `2-add_dnodeint.c`, `3-add_dnodeint_end.c`.
* **8. Delete at index** - Write a function that deletes the node at index `index` of a `dlistint_t` linked list. - `8-delete_dnodeint.c`.
* **9. Crackme4** - Find the password for [crackme4](https://github.com/holbertonschool/0x17.c). - `100-password`.
* **10. Palindromes** - Find the largest palindrome made from the product of two 3-digit numbers. - `102-result`.
* **11. crackme5** - Write a keygen for [crackme5](https://github.com/holbertonschool/0x17.c). - `103-keygen.c`.


## Collaborate

To collaborate, reach me through my email address wendymunyasi@gmail.com.