#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all of the arguments
 * @n: value of variadic argument
 * Return: 0 if its 0, sum otherwise
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
char *sep;
unsigned int i;
va_list ap;
va_start(ap, n);

if (separator == NULL)
{
sep = "";
for (i = 0; i < n; i++)
	printf("%d%s", va_arg(ap, unsigned int), sep);
}
else
for (i = 0; i < n; i++)
{
for (i = 0; i < n; i++)
	printf("%d%s", va_arg(ap, unsigned int), separator);
}
va_end(ap);
printf("\n");
}
