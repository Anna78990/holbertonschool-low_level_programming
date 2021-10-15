#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
* *rot13 - rotate by 13 places.
* @c: string
* Return: (c)
*/

char *rot13(char *c)
{
	int i;
	char *alpha;
	char *alphao;
	int n;

	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	alphao = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; c[i]; i++)
	{
		for (n = 0; alpha[n] ; n++)
		{
			if (c[i] == alpha[n])
			{
				c[i] = alphao[n];
				break;
			}
		}
	}
	return (c);
}
