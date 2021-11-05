#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all of the arguments
 * @n: value of variadic argument
 * Return: 0 if its 0, sum otherwise
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
va_start(ap, n);

if (n == 0)
{
	return (0);
}
else
{
	unsigned int i;
	unsigned int sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);
	va_end(ap);
	return (sum);
}
}
