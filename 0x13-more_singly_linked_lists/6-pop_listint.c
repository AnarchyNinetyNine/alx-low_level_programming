#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of
 *               a listint_t linked list.
 * @head: The address of the head of a listint_t linked list.
 *
 * Return: # The head node’s data (n) (On Success).
 *         # 0 if the linedk list is empty.
 */

int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *nextNode, *tmp = *head;

	if (!head || *head == NULL)
		return (data);
	data = tmp->n;
	nextNode = tmp;
	tmp = tmp->next;
	free(nextNode);
	*head = tmp;
	return (data);
}
