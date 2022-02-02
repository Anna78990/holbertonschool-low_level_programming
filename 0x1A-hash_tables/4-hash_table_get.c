#include <string.h>
#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hashtable to be searched on
 * @key: key to search
 * Return: value if it exist, otherwise NULL.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *pin;
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	pin = ht->array[idx];
	while (pin != NULL)
	{
		if (strcmp(pin->key, key) == 0)
		{
			return (pin->value);
		}
		pin = pin->next;
	}
	return (NULL);
}
