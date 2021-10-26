#include "main.h"
#include <stdlib.h>

/**
 * char *create_array - creates an array of chars.
 * @size: the address of array
 * @c: char in the array
 * Return: (NULL)(ch)
 */

char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	ch = malloc(size * sizeof(char));
	if (size == 0)
	{
	return (NULL);
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			ch[i] = c;
		}
	return (ch);
	}
}
