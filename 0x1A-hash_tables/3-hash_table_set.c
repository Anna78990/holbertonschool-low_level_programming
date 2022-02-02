#include <string.h>
#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hashtable to be added to
 * @key: key to search
 * @value: value of element
 * Return: 1 if succeedd, otherwise 0.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *el, *pin;
	unsigned long int idx;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	pin = ht->array[idx];
	while (pin)
	{
		if (pin->key == key)
		{
			free(pin->value);
			pin->value = strdup(value);
			if (pin->value == NULL)
				return (0);
			return (1);
		}
		pin = pin->next;
	}

	el = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (el == NULL)
		return (0);
	el->key = strdup(key);
	el->value = strdup(value);
	el->next = ht->array[idx];
	ht->array[idx] = el;
	return (1);
}
