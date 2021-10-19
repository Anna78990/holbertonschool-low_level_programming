#include "main.h"
#include <string.h>

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to the memory area
 * @b: date to write
 * @n: Length
 * Return: (*s)
 */

char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;

while(n--)
	*ptr++ = b;
return (s);
}
