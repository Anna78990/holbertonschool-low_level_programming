#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - add a node to the end
 * @head: null pointer
 * @str: string in new element
 * Return: pointer to new element
 */


list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *new;
	list_t *temp;

	for (i = 0; str[i]; i++)
		;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = i;
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
