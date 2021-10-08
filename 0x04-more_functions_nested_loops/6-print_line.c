#include "main.h"
#include <stdlib.h>

/**
 * print_line - prints the lines.
 * @n : int
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	for (i = 1 ; i <= n ; i++)
	{
	_putchar('_');
	}
	_putchar('\n');
}
