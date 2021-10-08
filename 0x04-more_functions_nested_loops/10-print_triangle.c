#include "main.h"
#include <stdlib.h>

/**
 * print_triangle - prints the triangle
 * @size : int
 * Return: nothing
 */

void print_triangle(int size)
{
	int sp;
	int tri;
	int i;
	int n;
	int k;

	sp = size - 1;
	tri = size - sp;
	if (size > 0)
	{
	for (i = 0 ; i < size ; i++)
	{
		for (n = 0 ; n < sp ; n++)
		{
		_putchar(' ');
		}
		for (k = 0 ; k < tri; k++)
		{
		_putchar('#');
		}
	_putchar('\n');
	sp--;
	tri++;
	}
	}
	else
	{
	_putchar('\n');
	}
}
