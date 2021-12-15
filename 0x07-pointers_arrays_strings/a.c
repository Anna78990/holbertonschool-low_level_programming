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
	int x;
	int *sum;
	int i;
	int z;
	
	x = 1;
	i = 2;
	sum = a;
	z = size * size;

	while (i < z)
	{
		if ((z % i) == 0)
		{
		sum += *(sum + (i + x));
		printf("x : %d i : %d \n", x, i);
		x++;
		printf("sum + i : %d\n", *(sum + (i + x)));
		}
		i++;
	}
	printf("sum :%d\n", *sum);
}
