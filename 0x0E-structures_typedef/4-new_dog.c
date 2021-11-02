#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
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

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	n = malloc((ch_count(name) + 1) * sizeof(char));
	if (n == NULL)
	{
		free(d);
		return (NULL);
	}
	else
	{
		for (i = 0; i <= ch_count(name); i++)
			n[i] = name[i];
	}
	for (i = 0; i <= ch_count(name); i++)
		n[i] = name[i];
	n[i] = '\0';
	(*d).name = n;
	(*d).age = age;
	o = malloc((ch_count(owner) + 1) * sizeof(char));
	if (o == NULL)
	{
		free(n);
		free(d);
		return (NULL);
	}
	else
	{
		for (j = 0; j <= ch_count(owner); j++)
			o[j] = owner[j];
	}
	for (j = 0; j <= ch_count(owner); j++)
		o[j] = owner[j];
	o[j] = '\0';
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
