#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - print dog structure
 * @d: pointer to strucuture
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	char *name = (*d).name;
	float age = (*d).age;
	char *owner = (*d).owner;

	if (name != NULL)
		printf("Name: %s\n", name);
	else
		printf("Name: (nil)\n");
	printf("Age: %f\n", age);
	if (owner != NULL)
		printf("Owner: %s\n", owner);
	else
		printf("Owner: (nil)\n");
	}
}
