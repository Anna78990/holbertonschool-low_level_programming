#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - This function print all of the lower case alphabets in reverse order.
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
