#include "lists.h"

/**
 * add_dnodeint - A function that adds a new node
 *                at the beginning of a dlistint_t list.
 * @head: A pointer to the head of the list.
 * @n: An integer value.
 *
 * Return: The address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
		new->next = NULL;

	else
	{
		new->next = *head;
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
