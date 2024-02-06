#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a listint_t list.
 * @h: The head of a listint_t linked list.
 *
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes += 1;
	}
	return (nodes);
}
