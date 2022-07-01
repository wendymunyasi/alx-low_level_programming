#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: pointer to hash table to be deleted.
 *
 * Return: No return.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current = NULL;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i])
			{
				current = ht->array[i];
				free(current->key);
				free(current->value);
				ht->array[i] = ht->array[i]->next;
				free(current);
			}
		}
	}
	free(ht->array);
	free(ht);
}
