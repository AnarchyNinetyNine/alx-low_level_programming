#include "hash_tables.h"

/**
 * key_index - Spit key index.
 * @key: The key.
 * @size: Hash table array size.
 *
 * Return: Index at which the key/value pair should be stored
 *         in the array of the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (!key || !size)
		return (0);

	return (index = hash_djb2((unsigned char *)key) % size);
}
