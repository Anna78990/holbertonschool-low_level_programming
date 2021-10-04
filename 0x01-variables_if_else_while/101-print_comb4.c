#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - This function print all of the possible number between 0 and 9.
 * Return: 0
 */
int main(void)
{
	int i;
	int n;
	int s;

	for (i = '0' ; i <= '9' ; i++)
	{
		for (n = '0' ; n <= '9' ; n++)
		{
			for (s = '0' ; s <= '9' ; s++)
			{
				if (((i != n) && (i != s) && (n != s)) && ((i < n) && (n < s)))
				{
				putchar(i);
				putchar(n);
				putchar(s);
				if (((i == '7') && (n == '8')) && (s == '9'))
				{
				continue;
				}
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
