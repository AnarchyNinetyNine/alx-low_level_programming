#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node
 *                           at a given position.
 * @head: The address of the head of the listint_t linked list.
 * @idx: The index of the list where the new node should be added.
 * @n: An integer.
 *
 * Return: address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *previous, *node = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (!head || *head == NULL || !new)
		return (NULL);
	while (node && count++ != idx)
	{
		previous = node;
		node = node->next;
	}
	if (node)
	{
		new->n = n;
		new->next = node;
		previous->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}
