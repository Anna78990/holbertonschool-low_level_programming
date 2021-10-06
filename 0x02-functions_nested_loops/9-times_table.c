#include "main.h"
#include <math.h>

/* more headers goes there */
/**
* times_table - prints the 9 times tabl
* Return: Nothing
*/
void times_table(void)
	{
	int f;
	int s;

	for (f = 0 ; f <= 9 ; f++)
	{
		for (s = 0 ; s <= 9 ; s++)
		{
		int i = f * s;

		if (i < 10)
		{
		_putchar(i / 1 + '0');
		}
		else
		{
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		}
		if (s == 9)
		{
		continue;
		}
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
		_putchar('\n');
	}
	}
