#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array to search
 * @size: size of the array
 * @cmp: function to do
 * Return: -1 if false, something else otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		else
		{
			int i;

			for (i = 0; i < size; i++)
			{
				if ((*cmp)(array[i]) != 0)
					return (i);
			}
			return (-1);
		}
	}
	else
		return (-1);
}
