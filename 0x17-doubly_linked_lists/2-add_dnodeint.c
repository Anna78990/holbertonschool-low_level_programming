#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add a node to the begining
 * @head: pointer to the list
 * @n: number in new element
 * Return: pointer to new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *d = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (d)
		d->prev = new;
	*head = new;
	return (new);
}
