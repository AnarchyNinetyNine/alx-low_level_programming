#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a listint_t list.
 * @h: The head of a listint_t linked list.
 *
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *tmp = h;
	size_t nodes = 0;

	if (!tmp)
		return (0);
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		nodes += 1;
	}
	return (nodes);
}
