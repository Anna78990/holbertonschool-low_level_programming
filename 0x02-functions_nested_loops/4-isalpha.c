#include "main.h"
#include <ctype.h>

/* more headers goes there */
/**
* _isalpha- return 1 if its alphabet
* @c:  argument
* Return: 1
*/
int _isalpha(int c)
	{
	if (isalpha(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
	}
