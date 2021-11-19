#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: number to be compared
 * @m: number to be compared
 * Return: the number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, d, c = 0;

	if (n == m)
	{
		return (0);
	}
	else
	{
		x = m ^ n;
	}
	if (x == m || x == n)
	{
		return (1);
	}
	else
		d = x;
	while (d > 0)
	{
		if ((d & 1) == 1)
			c++;
		d = d >> 1;
	}
	return (c);
}
