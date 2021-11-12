#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all of the elements
 * @h: pointer to strucuture
 * Return: number of the elements
 */

size_t print_list(const list_t *h)
{
	int i = 0;

while (h)
{
	if (!(h->str))
		printf("[0] (nil)\n");
	else
	{
		printf("[%d] ", h->len);
		printf("%s\n", h->str);
	}
	h = h->next;
	i++;
}
	return (i);
}
