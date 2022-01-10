#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* *_strncpy - copy strings
* @dest: string
* @src: string
* @n : bytes
* Return: (dest)
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;

	strncpy(dest, src, n);
	for (i = 0 ; dest[i] == '\0' ; i++)
	;
	return (dest);
}

