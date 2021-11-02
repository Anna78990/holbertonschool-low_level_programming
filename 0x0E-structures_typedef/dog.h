#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int ch_count(char *cha);
void free_dog(dog_t *d);

#endif
