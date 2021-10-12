#include "main.h"
#include <string.h>

/**
* rev_string - reverses a string.
* @s: pointer
* Return: Nothing
*/

void rev_string(char *s)
{
	int i;
	int n;

	for (i = 0 ; s[i] != '\0' ; i++)
	;
	for (n = (i - 1) ; n >= 0 ; n--)
	{
	*s = s[(i - n)];
	}
}
