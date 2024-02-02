#include "lists.h"

/**
 * list_len - A function that returns
 *            the number of elements in a linked list_t list.
 * @h: a pointer to list_t.
 *
 * Return: The number of nodes.
 */

size_t list_len(const list_t *h)
{
	size_t count;
	const list_t *tmp = NULL;

	count = 0;
	tmp = h;
	if (!tmp)
		return (0);
	while (tmp && ++count)
		tmp = tmp->next;
	return (count);
}
