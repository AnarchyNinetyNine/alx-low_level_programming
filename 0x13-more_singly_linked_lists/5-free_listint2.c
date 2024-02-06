#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list,
 *                 then, sets the head to NULL.
 * @head: The address of the head of a listint_t linked list.
 */

void free_listint2(listint_t **head)
{
	listint_t *explorer = *head;
	listint_t *nextNode = NULL;

	if (!head || !explorer)
		return;
	while (explorer->next)
	{
		nextNode = explorer->next;
		free(explorer);
		explorer = nextNode;
	}
	free(explorer);
	nextNode = NULL;
	(*head) = NULL;
}
