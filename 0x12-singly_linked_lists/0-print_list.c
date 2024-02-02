#include "lists.h"

/**
 * print_list - A function that prints all the elements of a list_t list.
 * @h: a pointer to list_t.
 *
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	int count;
	const list_t *tmp;

	count = 0;
	tmp = h;
	if (!tmp)
		exit(1);
	while (h)
	{
		printf("[%u] %s\n", tmp->str ? tmp->len : 0, tmp->str ? tmp->str : "(nil)");
		tmp = tmp->next;
		count++;
	}
	return (count);
}
