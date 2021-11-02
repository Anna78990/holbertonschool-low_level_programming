#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * *new_dog - create a new dog structure* @name: name
 * @name: name
 * @age: age
 * @owner: owner
 * Return: (NULL)(d)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *n, *o;
	int i, j;

	n = malloc((ch_count(name) + 1) * sizeof(char));
	if (n == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= ch_count(name); i++)
			n[i] = name[i];
	}
	o = malloc((ch_count(owner) + 1) * sizeof(char));
	if (o == NULL)
	{
		free(n);
		return (NULL);
	}
	else
	{
		for (j = 0; j <= ch_count(owner); j++)
			o[j] = owner[j];
	}
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(n);
		free(o);
		return (NULL);
	}
	(*d).name = n;
	(*d).age = age;
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
