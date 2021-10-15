#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
* print_number -  prints an integer
* @n: number to output
* Return: Nothing
*/

void print_number(int n)
{
	int div;
	int ab;

	div = 1;
	if (n == 0)
		_putchar(0 + '0');
	else
	{
		if (n < 0)
		{
			_putchar('-');
		}
		ab = abs(n);
	while ((ab / (div * 10)) >= 1)
	{
		div *= 10;
	}
	while (ab >= 1)
	{
		_putchar((ab / div) + '0');
		ab %= div;
		div /= 10;
	}
	}
}
