#include "main.h"
#include <stdlib.h>

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to the string
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int n;
	int j;

	for (i = 0; a[i] != '\0'; i++)
		;
	for (n = 0; n < i; n++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
	}
}
