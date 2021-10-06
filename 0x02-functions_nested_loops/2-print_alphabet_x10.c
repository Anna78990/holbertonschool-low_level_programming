#include "main.h"

/* more headers goes there */
/**
* print_alphabet - print all of the lower case alphabets
* Return: 0
*/
void print_alphabet(void)
	{
	int ch;
	int i;
	for (i = 0; i <10 ; i++)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
		_putchar(ch);
		}
	_putchar('\n');
	}
	}
