#include "lists.h"

/**
 * listint_len - A function that returns the number of elements
 *               in a linked listint_t list.
 * @h: The head of a listint_t linked list.
 *
 * Return: The number of elements in a linked listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *tmp = h;
	size_t nodes = 0;

	if (!tmp)
		return (0);
	while (tmp)
	{
		nodes += 1;
		tmp = tmp->next;
	}
	return (nodes);
}
