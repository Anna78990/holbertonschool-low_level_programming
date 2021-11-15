#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free the linked lists
 * @head: pointer to list
 * Return : Always nothing
 */

void free_list(list_t *head)
{
list_t *fr = head;
list_t *n = NULL;

while (fr != NULL)
{
	n = fr->next;
	free(fr->str);
	free(fr);
	fr = n;
}
}
