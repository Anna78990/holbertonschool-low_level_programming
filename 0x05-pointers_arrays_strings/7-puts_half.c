#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* puts_half -  prints half of a string.
* @str: pointer
* Return: Nothing
*/

void puts_half(char *str)
{
	int i;
	int n;
	int size;
	/*
	*  char c;
	*/

	for (i = 0 ; str[i] != '\0' ; i++)
	;
	i--;
	size = i;
	if (size % 2 == 0)
	{
	for (n = (size / 2) + 1 ; n <= i ; n++)
	{
		_putchar(str[n]);
	}
	}
	else
	{
	for (n = ((size - 1) / 2) + 1 ; n <= i ; n++)
	{
		_putchar(str[n]);
	}
	}
	_putchar('\n');
}
