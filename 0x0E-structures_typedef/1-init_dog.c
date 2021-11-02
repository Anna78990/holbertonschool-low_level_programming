#include "dog.h"

/**
 * init_dog - initialising dog structure
 * @d: pointer to strucuture
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

(*d).name = name;
(*d).age = age;
(*d).owner = owner;

}
