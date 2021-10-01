#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - This function print all of the number between 0 and 9.
 * Return: 0
 */
int main(void)
{
	int i;
	int n;

	for (i = '0' ; i <= '9' ; i++)
	{
	for (n = '0' ; n <= '9' ; n++)
	{
	if (i == '0' && n == '0')
	{
	continue;
	}
	putchar(i);
	putchar(n);
	if (i == '9' && n == '9')
	{
	continue;
	}
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
