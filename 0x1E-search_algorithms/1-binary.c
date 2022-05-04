#include <stddef.h>
#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to array
 * @size: size of array
 * @value: value to search
 * Return: if it is failed, return -1, otherwise first index of the value
 */

int binary_search(int *array, size_t size, int value)
{
	int imin, imid, imax, i;

	imin = 0;
	imax = size - 1;
	if (array == NULL)
		return (-1);


	while (imin <= imax)
	{
		printf("Searching in array: ");
		for (i = imin; i <= imax; i++)
		{
			if (i == imax)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		imid = imin + (imax - imin) / 2;

		if (array[imid] == value)
			return (imid);
		if (array[imid] < value)
			imin = imid + 1;
		else
			imax = imid - 1;
	}
	return (-1);
}
