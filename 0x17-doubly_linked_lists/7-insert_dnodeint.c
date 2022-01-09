#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - nserts a new node at a given position.
 * @h: pointer to the list
 * @n: number in new element
 * @idx: n of nth node which lead the new node
 * Return: pointer to new element
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *swp, *prv;
	dlistint_t *tmp = *h;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = tmp;
		*h = new;
	}
	else
	{
	for (i = 0; i < idx; i++)
	{
		if (i > (idx - 1) || tmp == NULL)
		{
			free(new);
			return (NULL);
		}
		if (i == (idx - 1))
		{
			swp = tmp;
			prv = tmp;
			new->prev = prv;
			swp = swp->next;
			swp->prev = new;
			tmp->next = new;
			new->next = swp;
		}
		tmp = tmp->next;
	}
	}
	return (new);
}
