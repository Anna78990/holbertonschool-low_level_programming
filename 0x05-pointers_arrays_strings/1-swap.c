#include "main.h"

/**
* swap_int - updates the value it points to to 98.
* @a: pointer
* @b: pointer
* Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int aa = *a;
	*a = *b;
	*b = aa;
}
