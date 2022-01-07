#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - counts all the elements of a dlistint_t list.
 * @h: pointer to linked list to print
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
