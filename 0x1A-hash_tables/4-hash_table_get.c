#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: pointer to hash table to look into.
 * @key: pointer to key to looking for.
 *
 * Return: value associated with the element, or NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *temp_var;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	temp_var = ht->array[i];

	for (; temp_var != NULL; temp_var = temp_var->next)
	{
		if (strcmp(temp_var->key, key) == 0)
			return (temp_var->value);
	}
	return (NULL);
}
