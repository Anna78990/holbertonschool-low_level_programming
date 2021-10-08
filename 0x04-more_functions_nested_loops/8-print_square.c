#include "main.h"
#include <stdlib.h>

/**
 * print_square - prints the hashtag as square.
 * @size : int
 * Return: nothing
 */

void print_square(int size)
{
	int i;
	int k;

	if (size > 0)
	{
	for (i = 1 ; i <= size ; i++)
	{
	for (k = 0; k < size; k++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
