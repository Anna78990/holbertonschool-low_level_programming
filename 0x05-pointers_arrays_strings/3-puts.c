#include "main.h"
#include <string.h>

/**
* _puts - prints a string, followed by a new line, to stdout.
* @str: pointer
* Return: Nothing
*/

void _puts(char *str)
{
	int i;

	for (i = 0 ; i < 68 ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
