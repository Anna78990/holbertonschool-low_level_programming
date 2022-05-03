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
	int imin, isize, imax, i;

	if (array == NULL)
		return (-1);
	imin = array[0];
	isize = (int)size - 1;
	imax = array[isize];
	printf("Searching in array: ");
		for (i = 0; i < (int)size; i++)
		{
			if (i > 0)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");
	if (size == 1)
	{
		if (array[0] == value)
			return (0);
		else
			return (-1);
	}
	return (binary_search_rec(array, value, imin, imax, (int)size));
}

/**
 * binary_search_rec - searches for a value in a sorted array of integers
 * @ary: pointer to array
 * @key: value
 * @imin: minimum index
 * @imax: maximum index
 * @size: size of the array
 * Return: if it is failed, return -1, otherwise first index of the value
 */

int binary_search_rec(int *ary, int key, int imin, int imax, int size)
{
	int i, imid = imin + (imax - imin) / 2;

	if (imax < imin)
		return (-1);
	if (ary[imid] > key)
	{
		if (ary[0] != ary[imid])
		{
			printf("Searching in array: ");
			for (i = 0; i < imid; i++)
			{
				if (i > 0)
					printf(", ");
				printf("%d", ary[i]);
			}
			printf("\n");
		}
		return (binary_search_rec(ary, key, imin, imid - 1, size));
	}
	else if (ary[imid] < key)
	{
		if (ary[imid] != ary[imax])
		{
			printf("Searching in array: ");
			for (i = imid; ary[i] <= imax; i++)
			{
				if (i >= size)
					break;
				if (i > imid + 1)
					printf(", ");
				if (i > imid)
					printf("%d", ary[i]);
			}
			printf("\n");
		}
		return (binary_search_rec(ary, key, imid + 1, imax, size));
	}
	else
		return (imid);
}
