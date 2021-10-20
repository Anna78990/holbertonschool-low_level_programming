#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: number to factorial
 * Return: (n * factorial(n - 1)(n)(O)(-1)
 */

int factorial(int n)
{
	if (n > 0)
	{
		if (n > 1)
		return (n * factorial(n - 1));
		else
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
