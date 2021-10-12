#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* rev_string - reverses a string.
* @s: pointer
* Return: Nothing
*/

void rev_string(char *s)
{
	int i;
	int n;
	char c;
	int size;

	for (i = 0 ; s[i] != '\0' ; i++)
	;
	i--;
	size = i;//これ書かないと上のループに干渉しちゃう。
	for (n = 0 ; n <= size / 2 ; n++)
	{
	c = s[i];
	s[i] = s[n];
	s[n] = c;
	i--;
	}
}
