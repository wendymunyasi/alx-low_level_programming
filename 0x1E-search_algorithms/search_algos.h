#ifndef _search_algos_
#define _search_algos_

#include <stddef.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_search_index(int *array, size_t size, size_t l, size_t r, int value);

#endif /* _search_algos_ */
