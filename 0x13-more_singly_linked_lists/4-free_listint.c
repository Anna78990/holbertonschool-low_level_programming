#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free the linked lists
 * @head: pointer to list
 * Return : Always nothing
 */

void free_listint(listint_t *head)
{
listint_t *fr = head;
listint_t *n = NULL;

while (fr != NULL)
{
	n = fr->next;
	free(fr);
	fr = n;
}
}
