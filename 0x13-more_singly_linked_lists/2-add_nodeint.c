#include "lists.h"

/**
 * add_nodeint - A function that adds a new node
 *               at the beginning of a listint_t list.
 * @head: The address of the head of a listint_t linked list.
 * @n: An integer.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!head || !new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
