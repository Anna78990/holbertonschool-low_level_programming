#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *new_dog - create a new dog structure
 * @name: name
 * @age: age
 * @owner: owner
 * Return: (NULL)(d)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int cn, co;

	cn = ch_count(name) + 1;
	co = ch_count(owner) + 1;
	d = malloc(cn + sizeof(float) +co);
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

	return (d);
}

/**
 * ch_count - count the number of characters
 * @cha: string given
 * Return: (n)
 */

int ch_count(char *cha)
{
	int n;

	for (n = 0; cha[n] != '\0'; n++)
		;
	return (n);
}
