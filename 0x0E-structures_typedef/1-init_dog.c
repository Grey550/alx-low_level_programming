#include "dog.h"
#include <stdio.h>

/**
 * init_dog - intitializes the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * @d: pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog my_dog;

	d = &my_dog;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
