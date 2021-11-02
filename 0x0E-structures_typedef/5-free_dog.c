#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the memmory of alloc_grid
 * @grid: pointer to pointer
 * @height: pointer to width
 */

void free_dog(dog_t *d)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
