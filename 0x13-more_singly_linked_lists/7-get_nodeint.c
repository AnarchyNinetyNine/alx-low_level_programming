#include "lists.h"

/**
 * get_nodeint_at_index -  A function that returns the
 *                         nth node of a listint_t linked list.
 * @head: The head of a listint_t linked list.
 * @index: The index of the node, starting at 0.
 *
 * Return: # The nth node of a listint_t linked list (On Success).
 *         # NILL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *tmp = head;

	if (!head)
		return (NULL);
	while (tmp && count++ != index)
		tmp = tmp->next;
	return (tmp ? tmp : NULL);
}

