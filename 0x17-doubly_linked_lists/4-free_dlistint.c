#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free the linked lists
 * @head: pointer to list
 * Return : Always nothing
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *fr = head;
dlistint_t *n = NULL;

while (fr != NULL)
{
	n = fr->next;
	free(fr);
	fr = n;
}
}
