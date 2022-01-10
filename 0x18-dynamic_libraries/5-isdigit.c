#include "main.h"
#include <stdlib.h>

/**
 * _isdigit - it checks for uppercase character.
 * @c: third integer
 * Return: (1), (0)
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
