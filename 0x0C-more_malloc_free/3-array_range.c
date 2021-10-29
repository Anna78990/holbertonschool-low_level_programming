#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers.
 * @min : the least number in a array
 * @max : the largest number in a array
 * Return: (NULL)(ar)
 */

int *array_range(int min, int max)
{
int *ar;
int d;
int i;

if (min > max)
	return (NULL);
else
{
	d = max - min;
	ar = malloc((d + 1) * sizeof(int));
	if (ar == NULL)
		return (NULL);
	for (i = 0; min + i <= max ; i++)
		ar[i] = min + i;
	return (ar);
}
}
