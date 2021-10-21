#include "main.h"

/**
 * is_prime_number - return 1 if it is a prime number,
 * @n: value to check
 * Return: (1)(x)(-1)
 */

int is_prime_number(int n)
{
	if ((n != 2) && (n % 2) == 0)
	{
		return 0;
	}
	else
	{
		return prime(2, n);
	}
}

int prime (int i, int N)
{
	if (i <= N)
	{
		if (N % i == 0 && N != i)
		{
			return 0;
		}
		else if (N % i == 0 && N == i)
		{
			return 1;
		}
		else
		{
			return prime(i + 1, N);
		}
	}
	else
	{
		return 0;
	}
}
