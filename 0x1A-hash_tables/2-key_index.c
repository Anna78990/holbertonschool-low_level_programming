#include "hash_tables.h"
/**
 * key_index - give the index of a key
 * @key: key to search
 * @size: size of array
 * Return: Always EXIT_SUCCESS.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
