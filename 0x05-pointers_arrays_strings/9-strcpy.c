#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* *_strcpy -  copies the string pointed to by src.
* @dest: pointer
* @src: pointer
* Return: Nothing
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	strcpy(dest, src);
	for (i = 0 ; dest[i] == '\0' ; i++)
	;
	return (dest);
}
