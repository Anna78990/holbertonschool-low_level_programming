#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat -  concatenates two strings
 * @s1 : first string
 * @s2 : second string
 * @n : the number of bytes of s2
 * Return: (NULL)(ch)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ch;
	unsigned int size, len;

	if (s1 == NULL)
		size = 0;
	else
		size = ch_count(s1);
	if (s2 == NULL)
		len = 0;
	else
		len = ch_count(s2);
	if (n > len)
		ch = (char *)malloc(sizeof(char) * (size + len + 6));
	else
		ch = (char *)malloc(sizeof(char) * (size + n + 6));
	if (ch != NULL)
	{
		if (n > len)
		{
			n = len;
			return (string_nconcat2(ch, s1, s2, size, n));
		}
		else
		{
			return (string_nconcat2(ch, s1, s2, size, n));
		}
	}
	else
		return (NULL);
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

/**
 * *string_nconcat2 -  concatenates two strings
 * @ch : buffer
 * @s1 : first string
 * @s2 : second string
 * @size : length of s1
 * @n : length of s2
 * Return: (ch)
 */

char *string_nconcat2(char *ch, char *s1, char *s2,
unsigned int size, unsigned int n)
{
	int i = 0;
	unsigned int k;

	if (s1 == NULL || size == 0)
		ch[0] = '\0';
	else
	{
		for (; s1[i] != '\0'; i++)
			ch[i] = s1[i];
	}
	if (s2 == NULL || n == 0)
	{
	if (s1 == NULL || s1[0] == '\0')
		ch[1] = '\0';
	else
		ch[i] = '\0';
	}
	else
	{
	for (k = 0; k < n; k++)
		ch[i++] = s2[k];
	ch[i++] = '\0';
	}
	return (ch);
}
