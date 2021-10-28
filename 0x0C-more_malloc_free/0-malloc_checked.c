#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory 
 * @b: valeur given
 * Return: (i)
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *i;

	i = (void *)malloc(b);
	if (i == NULL)
	{
		exit(98);
	}
	else
	{
		return (i);
	}
}
