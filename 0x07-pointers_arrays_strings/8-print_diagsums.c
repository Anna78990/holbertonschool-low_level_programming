#include "main.h"
#include <stdlib.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer to the array
 * @size: size of array
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int x, e, i, sum, sumy, y, z, counter;

	x = size + 1;
	y = size - 1;
	e = (size * size) - 1;
	sum = 0;
	sumy = 0;

	for (i = 0; i <= e; i += x)
		sum += *(a + i);
	for (z = y, counter = 1; counter <= size; z += y, counter++)
		sumy += *(a + z);
	printf("%d, %d\n", sum, sumy);
}
