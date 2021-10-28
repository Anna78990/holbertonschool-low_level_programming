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
int *ar;

if (nmemb == 0 || size == 0)
{
	return (NULL);
}
else
{
	ar = (int *)malloc(nmemb * size);
	if (ar == NULL)
	{
	free(ar);
	return (NULL);
	}
	return (ar);
}
}
