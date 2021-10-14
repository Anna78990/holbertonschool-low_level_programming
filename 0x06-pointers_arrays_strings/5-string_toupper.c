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

	for (size = 0; c[size] != '\0'; size++)
	;
	for (i = 0; i < size; i++)
	{
		if ((c[i] >= 97) && (c[i] <= 122)) 
		{
			c[i] -= 32;
		}
	}
	return (c);
}
