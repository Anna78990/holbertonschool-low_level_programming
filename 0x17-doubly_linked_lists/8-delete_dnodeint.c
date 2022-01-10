#include <stddef.h>
#include "lists.h"
#include <stdlib.h>


/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to the list
 * @index: n of nth node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head, *swp;
	unsigned int i;

	if (tmp == NULL)
	{
		return (-1);
	}
	if (tmp != NULL && index == 0)
	{
		if (tmp->next != NULL)
		{
			tmp->next->prev = NULL;
			*head = tmp->next;
		}
		else
			*head = NULL;
		free(tmp);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
	swp = tmp;
	if (tmp != NULL)
		tmp = tmp->next;
	else
		return (-1);
	}
	swp->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = swp;
	free(tmp);
	return (1);
}
