#include <string.h>
#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_delete - delete a specified hash table
 * @ht: hashtable to delete
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *del, *tmp;

	if (ht == NULL)
		return;

	for (i = 0; i <= ht->size; i++)
	{
		del = ht->array[i];
		while (del)
		{
			tmp = del;
			free(del->key);
			free(del->value);
			free(tmp);
			del = del->next;
		}
		free(del);
	}
	free(ht->array);
	free(ht);
}
