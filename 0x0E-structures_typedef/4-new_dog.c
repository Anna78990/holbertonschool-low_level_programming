#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *new_dog - create a new dog structure
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog;
	dog_t *d = &dog;
	char *n;
	char *o;
	int i, j, cn, co;

	cn = ch_count(name) + 1;
	co = ch_count(owner) + 1;
	n = malloc((ch_count(name) + 1) * sizeof(char));
	if (n == NULL)
		return (NULL);
	else
	{
		for(i = 0; i < cn; i++)
			n[i] = name[i];
	}
	(*d).name = n;
	(*d).age = age;
	o = malloc((ch_count(owner) + 1) * sizeof(char));
	if (n == NULL)
		return (NULL);
	else
	{
		for(j = 0; j < co; j++)
			o[j] = owner[j];
	}
	(*d).owner = o;

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
