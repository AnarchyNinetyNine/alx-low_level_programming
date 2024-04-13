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
	hash_node_t *newNode;

	if (!head || !key || !value)
		return (NULL);

	newNode = malloc(sizeof(hash_node_t));
	if (!newNode)
		return (NULL);

	newNode->key = strdup(key);
	if (!newNode->key)
	{
		free(newNode);
		return (NULL);
	}

	newNode->value = strdup(value);
	if (!newNode->value)
	{
		free(newNode->key);
		free(newNode);
		return (NULL);
	}

	newNode->next = *head;
	*head = newNode;
	return (newNode);
}

/**
 * update_value_if_key_exists - Search for a key in a linked list of hash nodes
 *                              and update its value.
 * @head: Pointer to the head of a hash node linked list.
 * @key: The key to search for.
 * @value: The new value to assign to the key if found.
 *
 * Return: 1 if the key was found and value updated successfully, 0 otherwise.
 */

int update_value_if_key_exists(hash_node_t *head, const char *key,
			       const char *value)
{
	hash_node_t *current = head;

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			/* Key found, update value */

			free(current->value);
			current->value = strdup(value);

			if (!current->value)
				return (0); /* Memory allocation failed */
			return (1);         /* Value updated successfully */
		}

		current = current->next;
	}

	return (0); /* Key not found */
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
	hash_node_t *target_node = NULL;
	hash_node_t *new_node = NULL;

	if (!ht || !key || !value || !ht->array || strcmp(key, "") == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	target_node = ht->array[index];

	/* Search for existing key and update value if found */
	if (update_value_if_key_exists(target_node, key, value))
		return (1); /* Value updated successfully */

	/* Key not found, add new node */
	new_node = add_node(&(ht->array[index]), (char *)key, value);

	/* Return 1 if node added successfully, 0 otherwise */
	return ((new_node != NULL) ? 1 : 0);
}
