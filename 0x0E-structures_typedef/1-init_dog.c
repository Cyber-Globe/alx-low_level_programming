#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type dog.
 * @d: initialized the dog.
 * @name: The dog name.
 * @age: Dog age.
 * @owner: The owner of the dog.
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

