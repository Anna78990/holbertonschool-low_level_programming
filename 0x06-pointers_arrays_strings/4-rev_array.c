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
	int c;

	for (i = 0, k = n - 1; i < n / 2; i++, k--)
	{
		c = a[i];
		a[i] = a[k];
		a[k] = c;
	}
}
