#include "lists.h"
#include <stdlib.h>
#include <stddef.h>


/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the linked list
 * Return: the element to delete, if it is empty 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *d = *head;
	int i;

	if (d == NULL)
	{
		return (0);
	}
	else
	{
		i = d->n;
		*head = d->next;
		free(d);
	}
	return (i);
}
