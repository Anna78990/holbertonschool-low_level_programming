#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - print all of the elements
 * @h: pointer to node
 * Return: number of the elements
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

while (h)
{
	printf("%d", h->n);
	printf("\n");
	h = h->next;
	i++;
}
	return (i);
}
