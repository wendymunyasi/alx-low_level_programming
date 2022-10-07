# Project Name
**0x1E. C - Search Algorithms**

## Author's Details
Name: *Wendy Munyasi.*

Email: *wendymunyasi@gmail.com*

Tel: *+254707240068.*

##  Requirements
*   Allowed editors: `vi`, `vim`, `emacs`.
*   All your files will be executed/compiled on Ubuntu 20.04 LTS using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
*	Version of `gcc`: 9.3.0.
*	Version of `make`: GNU Make 4.2.1.
*   All your files should end with a new line.
*	The `main.c` file is used to test your functions, but you don’t have to push them to your repo.
*	You are only allowed to use the `printf` function of the standard library. Any call to another function like `strdup`, `malloc`, … is forbidden.
*   The prototypes of all your functions should be included in your header file called `search_algos.h`.
*	All your header files should be include guarded.

## Project Description
Learn what is a search algorithm.
What are linear and binary searches and what is the best search algorithm to use depending on your needs.


* **0. Linear search** - Write a function that searches for a value in an array of integers using the `Linear search algorithm`. - ` 0-linear.c`.

  ```
  wilfried@0x1E-search_algorithms$ cat 0-main.c 
	#include <stdio.h>
	#include <stdlib.h>
	#include "search_algos.h"

	/**
	* main - Entry point
	*
	* Return: Always EXIT_SUCCESS
	*/
	int main(void)
	{
			int array[] = {
					10, 1, 42, 3, 4, 42, 6, 7, -1, 9
			};
			size_t size = sizeof(array) / sizeof(array[0]);

			printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
			printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
			printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
			return (EXIT_SUCCESS);
	}
	wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear
	wilfried@0x1E-search_algorithms$ ./0-linear 
	Value checked array[0] = [10]
	Value checked array[1] = [1]
	Value checked array[2] = [42]
	Value checked array[3] = [3]
	Found 3 at index: 3

	Value checked array[0] = [10]
	Value checked array[1] = [1]
	Value checked array[2] = [42]
	Found 42 at index: 2

	Value checked array[0] = [10]
	Value checked array[1] = [1]
	Value checked array[2] = [42]
	Value checked array[3] = [3]
	Value checked array[4] = [4]
	Value checked array[5] = [42]
	Value checked array[6] = [6]
	Value checked array[7] = [7]
	Value checked array[8] = [-1]
	Value checked array[9] = [9]
	Found 999 at index: -1
  ```
---
* **1. Binary search** - Write a function that searches for a value in a sorted array of integers using the `Binary search algorithm`. - `1-Makefile`.

  ```
  wilfried@0x1E-search_algorithms$ cat 1-main.c 
	#include <stdio.h>
	#include <stdlib.h>
	#include "search_algos.h"

	/**
	* main - Entry point
	*
	* Return: Always EXIT_SUCCESS
	*/
	int main(void)
	{
			int array[] = {
					0, 1, 2, 3, 4, 5, 6, 7, 8, 9
			};
			size_t size = sizeof(array) / sizeof(array[0]);

			printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
			printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
			printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
			return (EXIT_SUCCESS);
	}
	wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-binary.c -o 1-binary
	wilfried@0x1E-search_algorithms$ ./1-binary 
	Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	Searching in array: 0, 1, 2, 3
	Searching in array: 2, 3
	Found 2 at index: 2

	Searching in array: 0, 1, 2, 3, 4
	Searching in array: 3, 4
	Searching in array: 4
	Found 5 at index: -1

	Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	Searching in array: 5, 6, 7, 8, 9
	Searching in array: 8, 9
	Searching in array: 9
	Found 999 at index: -1
  ```
---

* **2. Big O #0** - What is the time complexity (worst case) of a linear search in an array of size n? - `2-O`.
---

* **3. Big O #1** - What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n? - `3-O`.
---

* **4. Big O #2** - What is the time complexity (worst case) of a binary search in an array of size n? - `4-O`.
---

* **5. Big O #3** - What is the space complexity (worst case) of a binary search in an array of size n? - `5-O`.
---

* **6. Big O #4** -What is the space complexity of this function / algorithm? - `2-O`.

	```
	int **allocate_map(int n, int m)
	{
			int **map;

			map = malloc(sizeof(int *) * n);
			for (size_t i = 0; i < n; i++)
			{
						map[i] = malloc(sizeof(int) * m);
			}
			return (map);
	}
	```
---


## Collaborate

To collaborate, reach me through my email address wendymunyasi@gmail.com.
