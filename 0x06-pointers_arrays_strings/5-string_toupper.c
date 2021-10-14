#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
* *string_toupper - changes all lowercase letters of a string to uppercase.
* @c: string
* Return: (ch)
*/

char *string_toupper(char *c)
{
	int i;
	int size;

	for (i = 0, size = sizeof(c) ; i <= size; i++)
	{
	toupper(c[i]);
	}
	
	return (c);
}
