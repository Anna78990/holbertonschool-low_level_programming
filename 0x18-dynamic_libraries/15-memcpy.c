#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: pointer to the dest memory area
 * @src: pointer to the sorce memory area
 * @n: Length
 * Return: (*dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	char *s = src;

	while (n-- > 0)
	{
	*p = *s;
	p++;
	s++;
	}
	return (dest);
}
