#include "lists.h"
#include <stdlib.h>
#include <stddef.h>


/**
 * add_nodeint_end - add a node to the end
 * @head: null pointer
 * @n: number in new element
 * Return: pointer to new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
