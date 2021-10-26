#include "main.h"
#include <stdlib.h>

/**
 * *str_concat -  concatenates two strings
 * @s1 : first string
 * @s2 : second string
 * Return: (NULL)(ch)
 */

char *str_concat(char *s1, char *s2)
{
	char *ch;
	int i;
	int n;
	int size;
	int len;

	size = ch_count(s1);
	len = ch_count(s2);
		if (s1 == NULL || s2 == NULL)
		{
			return (NULL);
		}
		else
		{
			ch = (char *)malloc(sizeof(char) * (size + len));
			if (s1[0] == '\0')
				ch[0] = '\0';
			else
			{
				for (i = 0; s1[i] != '\0'; i++)
				{
					ch[i] = s1[i];
				}
			}
			if (s2[0] == '\0')
			{
				if (s1[0] == '\0')
					ch[1] = '\0';
				else
				ch[i] = '\0';
			}
			else
			{
				for (n = 0; s2[n] != '\0'; n++, i++)
				{
					ch[i] = s2[n];
				}
			}
			return (ch);
		}
}

/**
 * ch_count - count the number of characters
 * @cha: string given
 * Return: (n)
 */

int ch_count(char *cha)
{
	int n;

	for (n = 0; cha[n] != '\0'; n++)
		;
	n += 1;
	return (n);
}
