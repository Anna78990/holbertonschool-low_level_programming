#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to search
 * @index: index number of the binary
 * Return: the binary of the specified index
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int d;


d = n >> index;
if (index > 64)
	return (-1);
d = d & 1;
if (d == 1)
	return (1);
else
	return (0);
}
