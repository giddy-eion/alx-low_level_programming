#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - intialize dog
 * @d: the dog to be initialized
 * @name: char
 * @age: int
 * @owner: char
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
