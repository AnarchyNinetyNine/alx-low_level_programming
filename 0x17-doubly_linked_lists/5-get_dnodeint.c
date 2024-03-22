#include "lists.h"

/**
 * get_dnodeint_at_index -  A function that returns the
 *                         nth node of a dlistint_t linked list.
 * @head: The head of a dlistint_t linked list.
 * @index: The index of the node, starting at 0.
 *
 * Return: # The nth node of a dlistint_t linked list (On Success).
 *         # NILL if the node does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *tmp = head;

	if (!head)
		return (NULL);
	while (tmp && count++ != index)
		tmp = tmp->next;
	return (tmp ? tmp : NULL);
}

