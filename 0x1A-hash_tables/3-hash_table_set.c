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

	if (!*head)
	{
		newNode = = malloc(sizeof(hash_node_t));
		if (!newNode)
			return (NULL);
		*head = newNode;
	}

	while (*head)
	{
		if (strcmp((*head)->key, key) == 0)
		{
			free((*head)->value);
			(*head)->value = strdup(value);
			if (!(*head)->value)
				return (NULL);
			return ((*head));
		}
		(*head) = (*head)->next;
	}
	newNode->key = strdup(key);
	newNode->value = strdup(value);

	if (!newNode->key || newNode->value)
		return (NULL);

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
	hash_node_t *target_node = NULL;
	hash_node_t *new_node = NULL;

	if (!ht || !key || !value || !ht->array || strcmp(key, "") == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	target_node = ht->array[index];
	new_node = add_node(&target_node, (char *)key, value);

	return (new_node != NULL ? 1 : 0);
}
