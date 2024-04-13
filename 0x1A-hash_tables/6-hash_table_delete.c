#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to be deleted.
 *
 * Description: This function deletes a hash table and all of its elements.
 */
void hash_table_delete(hash_table_t *ht)
{
	/* Define Hash table array size */
	unsigned long int size;

	/* Define current and next targeted nodes */
	hash_node_t *current_node, *nextNode = NULL;

	/* Check if hash table or its components are NULL or empty */
	if (!ht || !ht->array || !ht->size)
		return;

	/* Retrieve Hash table array size */
	size = ht->size;

	while (size--)
	{
		/* Set the current targeted node to be deleted */
		current_node = ht->array[size];

		/* Run while current_node is not empty */
		while (current_node)
		{
			/* Set next targeted node to be deleted */
			nextNode = current_node->next;

			free(current_node->key);   /* Free node item */
			free(current_node->value); /* Free node item */
			free(current_node);        /* Free node itself */

			current_node = nextNode;   /* Move to next targeted node */
		}
	}

	/* Free the array of the hash table */
	free(ht->array);

	/* Free the hash table structure itself */
	free(ht);
}
