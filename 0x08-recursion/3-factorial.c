#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: number to factorial
 * Return: (i)(i + _strlen_recursion(s))
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
