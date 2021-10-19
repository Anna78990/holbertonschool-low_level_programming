#include "main.h"
#include <stdlib.h>

/**
 * *_strchr - locates a character in a string
 * @s: pointer to the string
 * @c: character to search
 * Return: (&s[i])(NULL)
 */

char *_strchr(char *s, char c)
{
	int len;
	int i;

	for (len = 0; s[len] != '\0'; len++)
		;
	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
