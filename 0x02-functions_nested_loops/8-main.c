#include "main.h"
#include <math.h>

/* more headers goes there */
/**
* jack_bauer - return the time
* Return: Nothing
*/
void jack_bauer(void)
	{
	int h;
	int m;

	for (h = 0 ; h < 24; h++)
	{
		_putchar(h / 10 + '0');
		_putchar(h % 10 + '0');

		for (m = 0 ; m <= 60 ; m++)
		{
		_putchar(m / 10 + '0');
		_putchar(m % 10 + '0');
		}
	}
