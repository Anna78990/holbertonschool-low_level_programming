#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *_strchr - locates a character in a string
 * @s: pointer to the string
 * @c: character to search
 * Return: (*s)
 */

char *_strchr(char *s, char c)
{
int len;
int i;

len = strlen(s);
	for (i = 0; i < len; i++)
	{
	if (s[i] == c)
	{
		return (&s[i]);
	}
	}
		return (NULL);
}
