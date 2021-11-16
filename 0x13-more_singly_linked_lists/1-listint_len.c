#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked list_t list
 * @h: pointer to node
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
