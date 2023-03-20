#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - Program that initialize struct dog variables
 * @d: Struct for initialization
 * @name: Hold name char array
 * @age: Holds age float value
 * @owner: Holds owner name char array
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

