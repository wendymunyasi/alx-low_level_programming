#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: pointer to hash table to be printed.
 *
 * Return: No return.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *test;
	unsigned long int i = 0, n = 0;

	if (ht == NULL)
		return;
	printf("{");

	for (i = n; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			test = ht->array[i];
			while (test)
			{
				printf("%s'%s': '%s'", n == 0 ? "" : ", ",
					   test->key, test->value), n++;
				test = test->next;
			}
		}
	}
	printf("}\n");
}
