#include "lists.h"

/**
 * dlistint_len - A function that returns the number
 *                of elements in a liked dlistint_t list.
 * @h: Head of a dlistint_t list.
 *
 * Return: The number of entities present in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t count = 0;

	if (!h)
		return (0);
	while (tmp)
	{
		++count;
		tmp = tmp->next;
	}
	return (count);
}
