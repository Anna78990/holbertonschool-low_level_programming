#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb : pointer to array
 * @size : bytes of array
 * Return: (NULL)(ar)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ar;
unsigned int i;

if (nmemb == 0 || size == 0)
{
	return (NULL);
}
else
{
	ar = malloc(nmemb * size);
	if (ar == NULL)
	{
	free(ar);
	return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
	ar[i] = 0;
	}
	return (ar);
}
}
