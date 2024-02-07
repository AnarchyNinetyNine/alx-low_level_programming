#include "lists.h"

/**
 * sum_listint - A unction that returns the sum of all the data (n)
 *               of a listint_t linked list.
 * @head: The head of a listint_t linked list.
 *
 * Return: # The sum of all the data (n) of the linked list (On Success).
 *         # 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int elemCount = 0;

	if (!head)
		return (elemCount);
	while (tmp)
	{
		elemCount += tmp->n;
		tmp = tmp->next;
	}
	return (elemCount);
}
