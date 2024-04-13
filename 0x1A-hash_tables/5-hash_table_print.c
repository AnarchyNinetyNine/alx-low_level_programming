#include "hash_tables.h"

/**
 * print_node - A function that prints all the elements of a hash_node_t list.
 * @node: Pointer to the head of a linked list of hash_node_t.
 * @isFirst: Flag to indicate whether it's the first node being printed.
 */
void print_node(const hash_node_t *node, int isFirst)
{
	const hash_node_t *current = node;

	while (current != NULL)
	{
		if (!isFirst)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		isFirst = 0; /* Update isFirst to false after printing the first node */
		current = current->next;
	}
}

/**
 * hash_table_print - Prints all the elements in the hash table.
 * @ht: Pointer to the hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	int isFirst = 1; /* Flag to track if it's the first node being printed */

	if (ht == NULL || !ht->array || ht->size == 0)
	{
		printf("{}\n");
		return;
	}

	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			print_node(ht->array[index], isFirst);
			isFirst = 0; /* Update isFirst after printing elements of this index */
		}
	}

	printf("}\n");
}
