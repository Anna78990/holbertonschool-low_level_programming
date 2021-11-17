#include "lists.h"
#include <stdlib.h>
#include <stddef.h>


/**
 * insert_nodeint_at_index - nserts a new node at a given position.
 * @head: pointer to the list
 * @n: number in new element
 * @idx: n of nth node which lead the new node
 * Return: pointer to new element
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *swp;
	listint_t *tmp = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	new->n = n;
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < idx; i++)
	{
		if (i > (idx - 1) || tmp == NULL)
		{
			return (NULL);
		}
		if (i == (idx - 1))
		{
			swp = tmp;
			swp = swp->next;
			tmp->next = new;
			new->next = swp;
		}
		tmp = tmp->next;

	}
	return (swp);
}
