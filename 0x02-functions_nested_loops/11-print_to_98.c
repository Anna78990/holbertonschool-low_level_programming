#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/* more headers goes there */
/**
* print_to_98 - prints the number from n to98
* @n : argument
* Return: Nothing
*/

void print_to_98(int n)
{
int i, d;

if (n <= 98)
{
for (i = n; i <= 98 ; i++)
{
	if (i != n)
	{
		_putchar(',');
		_putchar(' ');
	}
	if (i < 0)
	{
		_putchar('-');
		d = abs(i);
		print_numbers_rec(d);
	}
	else if (i == 0)
		_putchar('0');
	else
		print_numbers_rec(i);
}
}
else
{
	for (i = n; i >= 98 ; i--)
	{
		if (i != n)
		{
			_putchar(',');
			_putchar(' ');
		}
		print_numbers_rec(i);
	}
}
_putchar('\n');
}

/**
 * print_numbers_rec - print the numbers
 * @a: number to print
 * Return: nothing
 */
void print_numbers_rec(int a)
{
	if (a >= 1)
	{
		print_numbers_rec((a / 10));
		_putchar((a % 10) + '0');
	}
}
