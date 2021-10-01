#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - This function print hexadecimal number from 0 to F
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = '0' ; ch <= 'f' ; ch++)
	{
		if ((ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'f'))
		{
		putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
