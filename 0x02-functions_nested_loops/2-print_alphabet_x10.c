#include "main.h"

/* more headers goes there */
/**
* print_alphabet_x10 - print all of the lower case alphabets x10
* Return: 0
*/
void print_alphabet_x10(void)
	{
	int i;

	for (i = 0; i < 10; i++)
	{
	print_alphabet();
	}
	}

/**
* print_alphabet - print all of the lower case alphabets
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
