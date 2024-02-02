#include "lists.h"

/**
 * print_list - A function that prints all the elements of a list_t list.
 * @h: a pointer to list_t.
 *
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t count;
	const list_t *tmp = NULL;

	count = 0;
	tmp = h;
	if (!tmp)
		return (0);
	while (tmp)
	{
		printf("[%u] %s\n", tmp->str ? tmp->len : 0, tmp->str ? tmp->str : "(nil)");
		tmp = tmp->next;
		count++;
	}
	return (count);
}
