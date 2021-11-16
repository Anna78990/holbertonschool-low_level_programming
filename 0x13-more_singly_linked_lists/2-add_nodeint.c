#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add a node to the begining
 * @head: pointer to the list
 * @n: number in new element
 * Return: pointer to new element or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
