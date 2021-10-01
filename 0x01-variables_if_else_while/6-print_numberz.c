#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - This function print all of the lower case alphabets.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}
