#include <stdlib.h>
#include "main.h"


unsigned int binary_to_uint(const char *b)
{
	unsigned int n, z, sum = 0;
	unsigned int i = 1;
	
	if (b == NULL)
		return (0);
	for (n = 0; b[n]; n++)
	{
	if (n > 0)
		i *= 2;
	}
	for (z = 0; b[z]; z++)
	{
		if (b[z] != '0' && b[z] != '1')
			return (0);
		else if (b[z] == '1')
			sum += i;
		else 
			sum += 0;
	i /= 2;
	}
	return (sum);
}
