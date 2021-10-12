#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* puts2 - prints every other character of a string.
* @str: pointer
* Return: Nothing
*/

void puts2(char *str)
{
	int i;
	int n;
	/*
	*  char c;
	*/

	for (i = 0 ; str[i] != '\0' ; i++)
	;
	i--;
	for (n = 0 ; n <= i ; n++)
	{
		if (n % 2 == 0)
		{
		_putchar(str[n]);
		}
	}
	_putchar('\n');
}
