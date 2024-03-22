#include "lists.h"

/**
 * free_dlistint - A function that frees a dlistint_t list.
 * @head: A pointer to the first node  of a dlistint_t list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next;

	if (!head)
		return;

	current = head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
