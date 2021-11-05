#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print number
 * @separator: separator
 * @n: value of variadic argument
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;
va_start(ap, n);

if (separator == NULL)
{
for (i = 0; i < n; i++)
	printf("%d", va_arg(ap, unsigned int));
}
else
for (i = 0; i < n; i++)
{
for (i = 0; i < n; i++)
{
	printf("%d", va_arg(ap, unsigned int));
	if (i != (n - 1))
		printf("%s", separator);
}
}
va_end(ap);
printf("\n");
}
