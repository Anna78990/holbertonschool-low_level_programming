#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
* *cap_string - capitalizes all words of a string
* @c: string
* Return: (c)
*/

char *cap_string(char *c)
{
	int i;
	int size;
	int mi;

	for (size = 0; c[size] != '\0'; size++)
	;
	for (i = 0, mi = i - 1; i < size; i++, mi++)
	{
		if ((c[mi] == ' ' || c[mi] == ',' || c[mi] == ';' ||
		c[mi] == '.' || c[mi] == '!' || c[mi] == '?' || c[mi] == '"' ||
		c[mi] == '(' || c[mi] == ')' || c[mi] == '{' || c[mi] == '}' ||
		c[mi] == '\t' || c[mi] == '\n') 
		&& (c[i] >= 97 && c[i] <= 122))
		{
			c[i] -= 32;
		}
	}
	return (c);
}
