#include <stdio.h>
#include <string.h>

/**
* main - Entry point
*
* Return: 1
*/

int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;

	for (i = 0; i < 58; i++)
	{
	putchar(str[i]);
	}
	putchar('\n');
	return (1);
}

