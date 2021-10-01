#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
* main - This function print all of the lower and upper case alphabets.
* Return: 0
*/
int main(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
	putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}

