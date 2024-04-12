#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table.
 * @size: Array size.
 *
 * Return: # A pointer to the newly created hash table.
 *         # NULL otherwise.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashMapPtr = malloc(sizeof(hash_table_t));

	if (!hashMapPtr)
		return (NULL);

	hashMapPtr->size = size;
	hashMapPtr->array = malloc(sizeof(hashMapPtr) * size);

	if (!hashMapPtr->array)
	{
		free(hashMapPtr);
		return (NULL);
	}

	while (size--)
		hashMapPtr->array[size] = NULL;
	return (hashMapPtr);
}
