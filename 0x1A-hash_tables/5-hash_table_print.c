#include <string.h>
#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_print - prints hashtable
 * @ht: hashtable to print
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	int i = 0;
	unsigned long int l;
	hash_node_t *hn;

	if (ht == NULL)
		return;

	printf("{");
	for (l = 0; l < ht->size; l++)
	{
		hn = ht->array[l];
		if (i > 0 && hn != NULL)
			printf(", ");
		if (hn != NULL)
		{
		printf("'%s': '%s'", hn->key, hn->value);
		i += 1;
		}
	}
	printf("}\n");
}
