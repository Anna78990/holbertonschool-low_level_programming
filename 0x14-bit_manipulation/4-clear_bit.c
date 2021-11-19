#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the number to be changed
 * @index: n of nth index
 * Return: the converted number
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int s = *n;
unsigned long int d = s >> index;
unsigned long int i;

if (index > 64)
	return (-1);
else if (d == 0)
{
	*n = s;
	return (1);
}
else if (index == 0)
{
	if ((s & 1) == 1)
		*n = s - 1;
	else
		*n = s;
	return (1);
}
else
{
	if ((d & 1) == 1)
	{
		i = 1 << index;
		*n = s - i;
	}
	return (1);
}
}
