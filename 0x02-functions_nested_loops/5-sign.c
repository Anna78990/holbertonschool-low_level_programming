#include "main.h"
#include <ctype.h>

/* more headers goes there */
/**
* print_sign - return 1 if its greater than 0
* @n:  argument
* Return: 1
*/
int print_sign(int n)
	{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
	}
