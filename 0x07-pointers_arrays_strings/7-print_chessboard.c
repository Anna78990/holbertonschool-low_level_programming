#include "main.h"
#include <stdlib.h>

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to the string
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
	int n;
	int j;

	for (n = 0; n < 8; n++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[n][j]);
		}
		_putchar('\n');
	}
}
