#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int s = *n;
unsigned long int d = s >> (index);
unsigned long int i;

if(s == 0)
{
	*n = s;
	return (1);
}
else if (d == 0)
	return (-1);
else if (index == 0 || (s & 1) == 1)
{
	*n = s - 1;
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
