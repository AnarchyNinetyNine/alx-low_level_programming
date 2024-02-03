#include "lists.h"

/**
 * free_list - A function that frees a list_t list.
 * @head: A pointer to the first node  of a list_t list.
 */

void free_list(list_t *head)
{
	list_t *current, *next;

	if (!head)
		return;

	current = head;
	while (current)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
