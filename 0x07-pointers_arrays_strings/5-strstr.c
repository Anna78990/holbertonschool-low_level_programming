#include "main.h"
#include <stdlib.h>

/**
 * *_strstr -  locates a substring.
 * @haystack: pointer to the string
 * @needle: characters to search
 * Return: (&s[i])(NULL)
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k;

	if(*needle == '\0')
		return haystack;
	for(i = 0; haystack[i] != '\0'; i++)
	{
		if(haystack[i] == *needle)
		{
		for (j = i, k = 0; haystack[j] == needle[k]; j++, k++)
			;
		if (needle[k] == '\0')
			return (&haystack[i]);
		}
	}
	return (NULL);
}
