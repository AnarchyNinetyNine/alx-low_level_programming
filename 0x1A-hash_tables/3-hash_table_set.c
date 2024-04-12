#include "hash_tables.h"

/**
 * add_node - Add a new node at the beginning of a hash_node_t list.
 * @head: A pointer to the head of a hash_node_t list.
 * @key: key: The malloc'ed key.
 * @value: The value associated with key.
 *
 * Return: # The address of the new element, (on Success).
 *         # NULL if it failed
 */

hash_node_t *add_node(hash_node_t **head, char *key, const char *value)
{
	hash_node_t *newNode = malloc(sizeof(hash_node_t));

	if (!newNode)
		return (NULL);

	newNode->key = key;
	newNode->value = strdup(value);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}

/**
 * hash_table_set - Add an element to the hash table.
 * @ht: Hash table.
 * @key: The key.
 * @value: The value associated with key.
 *
 * Return: # 1 if Success.
 *         # 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	if (!ht || !key || !value || !ht->array || strcmp(key, "") == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	add_node(&node, (char *)key, value);

	return (index);
}
