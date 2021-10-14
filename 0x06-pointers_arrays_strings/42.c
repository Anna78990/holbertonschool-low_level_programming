#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* reverse_array - reverses the content of an array of integers.
* @a: array
* @n: number of arrays
* Return: Nothing
*/

void reverse_array(int *a, int n)
{
	int i;
	int k;
	k = n;

	for (i = (k - 1) ; i >= 0 ; i--)
	{
		if (i != (k - 1))
		{
			printf(", ");
		}
	printf("%d", a[i]);
	}
}
