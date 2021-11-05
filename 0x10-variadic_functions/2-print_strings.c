#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print number
 * @separator: separator
 * @n: value of variadic argument
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *p;
va_list ap;
va_start(ap, n);

if (separator == NULL)
{
for (i = 0; i < n; i++)
	printf("%s", va_arg(ap, char *));
}
else
{
for (i = 0; i < n; i++)
{
	p = va_arg(ap, char *);
	if (p != NULL)
		printf("%s", p);
	else if (p == NULL && i != (n - 1))
		printf("(nil)");
	if (i != (n - 1))
		printf("%s", separator);
}
}
va_end(ap);
printf("\n");
}
