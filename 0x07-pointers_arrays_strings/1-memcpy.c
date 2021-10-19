#include "main.h"
#include <string.h>

/**
 * *_memcpy - copies memory area
 * @dest: pointer to the dest memory area
 * @src: pointer to the sorce memory area
 * @n: Length
 * Return: (*dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	    while (n-- > 0) {
        *dest = *src;
        dest++;
        src++;
    }
return (dest);
}
