#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - This function print all of the lower case alphabets except e and q.
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
	if (ch == 'e' || ch == 'q')
	{
	continue;
	}
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
