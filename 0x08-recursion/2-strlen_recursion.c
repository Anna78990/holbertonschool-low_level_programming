#include "main.h"

/**
 * _strlen_recursion -  returns the length of a string.
 * @s: string to count
 * Return: Nothing
 */

int _strlen_recursion(char *s)
{	
	int i;

	i = 0;
	if (*s == '\0')
	{
		return i;
	}
	else
	{
	if (*s)
	{
		i += 1;
		s++;
	}
	return i + _strlen_recursion(s);
	}
}
