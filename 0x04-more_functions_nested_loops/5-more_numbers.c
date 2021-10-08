#include "main.h"
#include <stdlib.h>

/**
 * more_numbers - prints the numbers, from 0 to 14.
 * Return: nothing
 */

void more_numbers(void)
{
	int k;
	int i;
for (k = 0 ; k <= 10 ; k++)
{
	for (i = 0 ; i <= 14 ; i++)
	{
	if (i >= 10)
	{
	_putchar((i / 10 + '0'));
	}
	_putchar((i % 10 + '0'));
	}
	_putchar('\n');
}
}
