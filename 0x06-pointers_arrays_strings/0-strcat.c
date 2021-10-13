#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* *_strcat - concatenates two strings
* @dest: string
* @src: string
* Return: (dest)
*/

char *_strcat(char *dest, char *src)
{
	int i;

	strcat(dest, src);
	for (i = 0 ; dest[i] == '\0' ; i++)
	;
	return (dest);
}

