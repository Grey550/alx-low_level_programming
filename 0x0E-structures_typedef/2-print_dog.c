#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints dog
 * @d: pointer of a struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("nil\n");
	}
	if (d->age < 0)
	{
		printf("nil\n");
	}
	if (d->owner == NULL)
	{
		printf("nil\n");
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);

}

