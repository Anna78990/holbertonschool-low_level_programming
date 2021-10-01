#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - This function print numbers from 0 to 9,using commas and spaces.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
	putchar(i);
	if (i == '9')
	{
	continue;
	}
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
