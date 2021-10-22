#include "main.h"
#include <stdlib.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to the string
 * @accept: character to search
 * Return: (&s[i])(NULL)
 */

char *_strpbrk(char *s, char *accept)
{
	int len;
	int i;
	int n;
	int lena;

	for (len = 0; s[len] != '\0'; len++)
		;
	for (lena = 0; accept[lena] != '\0'; lena++)
		;
	for (i = 0; i <= len; i++)
	{
		for (n = 0; n < lena; n++)
		{
			if (s[i] == accept[n])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
