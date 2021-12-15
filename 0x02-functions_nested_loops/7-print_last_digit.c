#include <math.h>
#include <stdlib.h>
#include "main.h"

/* more headers goes there */
/**
* print_last_digit - return the absolute value of last digit
* @a : integer
* Return: (abs(a % 10))
*/
int print_last_digit(int a)
	{
	int b = a % 10;

	if (b < 0)
		b *= -1;
	_putchar(b + '0');
	return (b);
	}
