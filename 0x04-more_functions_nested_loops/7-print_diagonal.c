#include "main.h"
#include <stdlib.h>

/**
 * print_diagonal - prints the diagonal.
 * @n : int
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i;
	int k;

	if (n > 0)
	{
	for (i = 1 ; i <= n ; i++)
	{
	for (k = 1 ; k < i ; k++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
