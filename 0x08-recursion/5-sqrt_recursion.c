#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: value to square root
 * Return: (multi(0, n))
 */

int _sqrt_recursion(int n)
{
	return (multi(0, n));
}

/**
 * multi - divede a number to find square root
 * @s : incrementation
 * @k : n
 * Return: (multi(s + 1, k))(s)(-1)
 */

int multi(int s, int k)
{
	if (s * s < k)
	{
		return (multi(s + 1, k));
	}
	else if (s * s == k)
	{
		return (s);
	}
	else
	{
		return (-1);
	}
}
