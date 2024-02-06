#include "lists.h"

/**
 * add_nodeint_end - A function  that adds a new node
 *                   at the end of a listint_t list.
 * @head: The address of the had of a listint_t linked list.
 * @n: An integer.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *explorer = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (!head || !new)
		return (NULL);
	if (!explorer)
		*head = new;
	else
	{
		while (explorer->next)
			explorer = explorer->next;
	}
	new->n = n;
	new->next = NULL;
	if (explorer)
		explorer->next = new;
	return (new);
}
