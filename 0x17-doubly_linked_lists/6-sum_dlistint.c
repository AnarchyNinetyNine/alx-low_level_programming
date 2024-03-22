#include "lists.h"

/**
 * sum_dlistint - A unction that returns the sum of all the data (n)
 *               of a dlistint_t linked list.
 * @head: The head of a dlistint_t linked list.
 *
 * Return: # The sum of all the data (n) of the linked list (On Success).
 *         # 0 if the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
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
