#include "main.h"
#include <ctype.h>

/* more headers goes there */
/**
* _islower - return 1 if its lowercase
* @c:  argument
* Return: 1
*/
int _islower(int c)
	{
	if (islower(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
	}
