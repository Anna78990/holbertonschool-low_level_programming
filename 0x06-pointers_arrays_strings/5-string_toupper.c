#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
* *string_toupper - changes all lowercase letters of a string to uppercase.
* @c: string
* Return: (c)
*/

char *string_toupper(char *c)
{
	int i;
	int size;

	size = sizeof(c);
	for (i = 0; i <= (size - 1); i++)
	{
	c[i] = toupper(c[i]);
	}
	return (c);
}
