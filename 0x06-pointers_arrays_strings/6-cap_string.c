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
	if(c[0] >= 97 && c[0] <= 122)
	{
	c[0] -= 32;
	}
	for (i = 1; i < size; i++)
	{
		mi = i - 1;
		if ((c[mi] == ' ' || c[mi] == ',' || c[mi] == ';' ||
		c[mi] == '.' || c[mi] == '!' || c[mi] == '?' || c[mi] == '"' ||
		c[mi] == '(' || c[mi] == ')' || c[mi] == '{' || c[mi] == '}' ||
		c[mi] == '\t' || c[mi] == '\n') && (c[i] >= 97 && c[i] <= 122))
		{
			c[i] -= 32;
		}
	}
	
	return (c);
}
