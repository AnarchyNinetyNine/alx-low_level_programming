#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list.
 * @head: The head of a listint_t linked list.
 */

void free_listint(listint_t *head)
{
	listint_t *explorer = head;
	listint_t *nextNode = NULL;

	if (!explorer)
		return;
	while (explorer->next)
	{
		nextNode = explorer->next;
		free(explorer);
		explorer = nextNode;
	}
	free(explorer);
}
