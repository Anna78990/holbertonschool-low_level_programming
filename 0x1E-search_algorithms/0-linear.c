#include <stddef.h>
#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - searches for a value in an array of integers.
 * @array: pointer to array
 * @size: size of array
 * @value: value to search
 * Return: if it is failed, return -1, otherwise first index of the value
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			break;
	}
	if (i == (int)size && array[i] != value)
		return (-1);
	return (i);
}
