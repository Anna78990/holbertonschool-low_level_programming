#include "function_pointers.h"

/**
 * array_iterator - print an array
 * @array: an array to print
 * @size: the size of array to print
 * @action: pointer to the function
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action && array)
	{
		int i;

		for (i = 0; i < (int)size; i++)
			(*action)(array[i]);
	}
}
