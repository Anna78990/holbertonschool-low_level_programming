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
		return (0);
	else if (n == 0)
		x = m;
	else if (m == 0)
		x = n;
	else
	{
		if (m == ULONG_MAX)
		{
			m = m >> 1;
			n = (n << 1) + 1;
		}
		else if (n == ULONG_MAX)
		{
			n = n >> 1;
			m = (n << 1) + 1;
		}
		x = m ^ n;
	}
	d = x;
	while (d > 0)
	{
		if ((d & 1) == 1)
			c++;
		d = d >> 1;
	}
	return (c);
}
