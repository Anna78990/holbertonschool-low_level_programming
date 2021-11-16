#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free the linked lists and sets the head to NULL
 * @head: pointer to list
 * Return : Always nothing
 */

void free_listint2(listint_t **head)
{
listint_t *fr = *head;
listint_t *n = NULL;

while (fr != NULL)
{
	n = fr->next;
	free(fr);
	fr = n;
}
	*head = NULL;
}
