#include <stdio.h>
#include "main.h"

void print_binary(unsigned long int n)
{

	if (n == 0)
		putchar('0');
	else if (n == 1)
		putchar('1');
	else
	{
		binary_rec(n);
	}
}

void binary_rec(unsigned long int n)
{
	if (n == 0)
		return;
	if (n > 0)
		binary_rec(n >> 1);
	if((n & 1) == 1)
		_putchar('1');
	else
		_putchar('0');
}
