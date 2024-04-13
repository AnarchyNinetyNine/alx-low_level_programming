#include "hash_tables.h"

/**
 * hash_table_get - Retrieve a value associated with a key.
 * @ht: Hash table.
 * @key: The key.
 *
 * Return: # The associated value with the element.
 *         # NULL if key couldn't be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key || strcmp(key, "") == 0 || !ht->array
	|| ht->size == 0 || strlen(key) == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}

