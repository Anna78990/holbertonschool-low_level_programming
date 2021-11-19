#include <stdio.h>
#include <stdlib.h>
#include "main.h"

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, d, c = 0;
	
	if (n == m)
		return (0);
	else
		x = m ^ n;
	if (x == m || x == n)
		return (1);
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
