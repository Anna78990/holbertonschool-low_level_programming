#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - print all arguments
 * @format: format argument
 */

void print_all(const char * const format, ...)
{
unsigned int i;
va_list ap;
char *s;

i = 0;
va_start(ap, format);

while (format && format[i] && i <= 9)
{
	switch (format[i++])
	{
		case 'c':
		printf("%c", va_arg(ap, int));
		break;
		case 'i':
		printf("%d", va_arg(ap, int));
		break;
		case 'f':
		printf("%f", (float)va_arg(ap, double));
		break;
		case 's':
		s = va_arg(ap, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		break;
		default:
		continue;
	}
	if (format[i])
		printf(",");
}
printf("\n");
va_end(ap);
}
