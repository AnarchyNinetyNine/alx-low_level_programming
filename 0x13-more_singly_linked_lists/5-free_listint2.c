#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list,
 *                 then, sets the head to NULL.
 * @head: The address of the head of a listint_t linked list.
 */

void free_listint2(listint_t **head)
{
	listint_t *explorer, *nextNode;

	if (!head)
		return;
	explorer = *head;
	while (explorer)
	{
		nextNode = explorer;
		explorer = explorer->next;
		free(nextNode);
	}
	*head = NULL;
}
