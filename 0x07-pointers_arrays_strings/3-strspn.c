#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strspn - locates a character in a string
 * @s: pointer to the string
 * @accept: character to search
 * Return: (n)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;

	n = strspn(s, accept);
	return (n);
}
