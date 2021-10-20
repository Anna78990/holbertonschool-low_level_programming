#include "main.h"

/**
 * _pow_recursion - returns the value of power
 * @x: value to power
 * @y: times to power
 * Return: (i)(i + _strlen_recursion(s))
 */

int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
		{
		return (1);
		}
		else
		{
		if (y > 1)
		{
		x *= _pow_recursion(x, y - 1);
		return (x);
		}
		else
		{
		return (x);
		}
		}
	}
	else
	{
		return (-1);
	}
}
