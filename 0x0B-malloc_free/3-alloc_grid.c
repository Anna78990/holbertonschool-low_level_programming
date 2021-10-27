#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width : width
 * @height : height
 * Return: (NULL)(ch)
 */

int **alloc_grid(int width, int height)
{
	int **pp;
	int i;
	int h;
	int w;
	
	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	else
	{
		pp = (int **)malloc(height * sizeof(int*));
		for (i = 0; i < height; i++)
		{
		pp[i] = (int *)malloc(width * sizeof(int));
		if (pp[i] == NULL)
			return NULL;
		}
		for (h = 0; h < height; h++)
		{
			for (w = 0; w < width; w++)
			{
				pp[h][w] = 0;
			}
		}
		return (pp);
	}
}
