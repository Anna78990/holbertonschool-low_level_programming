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

	if (str == NULL)
	{
	return (NULL);
	}
	else
	{
	ch = (char *)malloc(sizeof(char));
		if (ch == NULL)
			return (NULL);
		for (i = 0; str[i] != '\0'; i++)
		{
			ch[i] = str[i];
		}
	return (ch);
	}
}
