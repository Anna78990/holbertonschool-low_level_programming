#include <stdio.h>
#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int d = n >> (index); 
	
if (d == 0)
	return (-1);
else
{
	d = d & 1;
	if (d == 1)
		return (1);
	else
		return (0);
}
}
