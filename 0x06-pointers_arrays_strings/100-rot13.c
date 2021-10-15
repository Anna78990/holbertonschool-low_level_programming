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
	int len;
	int i;
	char *alpha;
	char *alphao;
	int n;

	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	alphao = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	len = strlen(c);
	for (i = 0; i < len; i++)
	{
		for (n = 0; n < 52 ; n++)
		{
			if (c[i] == alpha[n])
			{
				c[i] = alphao[n];
			}
		}
	}
	return (c);
}
