#include <stdio.h>
#include "main.h"

void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n *= -1;
	}
	else if (n == 0)
		putchar('0');
	if (n > 9)
	{
		print_recursion(n);
	}
}

int print_recursion(int n)
{
	if((n / 10) > 0)
	{
		print_recursion(n / 10);
		putchar((n % 10) + '0');
	}
	else
		putchar(n + '0');
	return 0;
}
