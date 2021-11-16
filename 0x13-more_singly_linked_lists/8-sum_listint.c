#include "lists.h"
#include <stdlib.h>
#include <stddef.h>


/**
 * sum_listint - returns the sum of all the node data(n).
 * @head: pointer to the linked list
 * Return: the sum of all the data, if it is empty, return NULL.
 */

int sum_listint(listint_t *head)
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
