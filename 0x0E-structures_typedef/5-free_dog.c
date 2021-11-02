#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the memmory of structure
 * @d: pointer to pointer
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	free((*d).name);
	free((*d).owner);
	free(d);
}
