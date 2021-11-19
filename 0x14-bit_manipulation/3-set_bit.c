#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number to be changed
 * @index: n of nth index
 * Return: the converted number
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int s = *n;
unsigned long int d = s >> index;
unsigned long int i;

if (index > 64)
	return (-1);
if (s == 0)
{
	s = 1 << index;
	*n = s;
	return (1);
}
else if (d == 0)
{
	s += 1 << index;
	*n = s;
}
else if ((d & 1) == 1)
	return (1);
else
{
	if (index == 0)
		*n = s | 1;
	else
	{
		i = 1 << index;
		*n = s | i;
	}
}
return (1);
}
