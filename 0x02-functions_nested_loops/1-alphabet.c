#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/* more headers goes there */
/**
* print_alphabet - print all of the lower case alphabets
* Return: 0
*/
void print_alphabet(void)
	{
	int ch;

		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
		_putchar(ch);
		}
	_putchar('\n');

	}
