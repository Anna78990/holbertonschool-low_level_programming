#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary character chaine
 * Return: sum ou binary
*/


unsigned int binary_to_uint(const char *b)
{
	unsigned int n, z, sum = 0;

	if (b == NULL)
		return (0);
	for (n = 0; b[n]; n++)
		;
	n--;
	for (z = 0; b[z]; z++)
	{
		if (b[z] != '0' && b[z] != '1')
			return (0);
		else if (b[z] == '1')
			sum += 1 << (n - z);
		else
			sum += 0;
	}
	return (sum);
}
