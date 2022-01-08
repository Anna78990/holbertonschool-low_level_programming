#include <stddef.h>
#include "lists.h"
#include <stdlib.h>


/**
 * sum_dlistint - returns the sum of all the node data(n).
 * @head: pointer to the linked list
 * Return: the sum of all the data, if it is empty, return NULL.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}
	else
	{
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
	}
}

