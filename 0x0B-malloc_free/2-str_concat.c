#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space
 * str: string given
 * Return: (NULL)(ch)
 */

char *str_concat(char *s1, char *s2)
{
	char *ch;
	int i;
	int n;
	int size;
	int len;

	size = count(s);
	len = count(s2);
	ch = (char *)malloc(sizeof(char) * (size + len));
		if (ch == NULL)
			return (NULL);
		else{
		for (i = 0; s1[i] != '\0'; i++)
		{	
			if (s1[0] != '\0')
			{
			ch[0] = "";
			break;
			}
			ch[i] = s1[i];
		}
		for (n = 0; s2[n] != '\0'; n++, i++)
		{
			if (s2[0] != '\0')
			{
				ch[i] = "";
				break;
			}
			ch[i] = s2[n];
		}
	return (ch);
	}
}
