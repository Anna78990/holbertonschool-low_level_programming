#include "lists.h"
#include <stdlib.h>
#include <stddef.h>


/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the linked list
 * @index: n of nth node
 * Return: the nth node, if it does not exist, return NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 1; i <= index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
