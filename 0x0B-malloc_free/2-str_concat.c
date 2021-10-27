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
	
	if (s1 == NULL)
		size = 0;
	else
		size = ch_count(s1);
	if (s2 == NULL)
		len = 0;
	else
		len = ch_count(s2);
	ch = (char *)malloc(sizeof(char) * (size + len + 1));
	i = 0;
	  if(ch != NULL)
			{
			if (s1 == NULL || size == 0)
				ch[0] = '\0';
			else
			{
				for (; s1[i] != '\0'; i++)
				{
					ch[i] = s1[i];
				}
			}
			if (s2 == NULL || len == 0)
			{
				if (s1 == NULL || s1[0] == '\0')
					ch[1] = '\0';
				else
				ch[i] = '\0';
			}
			else
			{
				for (n = 0; s2[n] != '\0'; n++)
				{
					ch[i++] = s2[n];
				}
			}
			return (ch);
			}
			else
			{
				return (NULL);
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
	return (n);
}
