#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space
 * str: string given
 * Return: (NULL)(ch)
 */

char *_strdup(char *str)
{
	char *ch;
	int i;
	int size;

	size = count(str);
	if (str == NULL)
	{
	return (NULL);
	}
	else
	{
	ch = (char *)malloc(sizeof(char) * size);
		if (ch == NULL)
			return (NULL);
		for (i = 0; str[i] != '\0'; i++)
		{
			ch[i] = str[i];
		}
	return (ch);
	}
}

int count(char *cha)
{
	int n;

	for (n = 0; cha[n] != '\0'; n++)
		;
	return (n);
}
