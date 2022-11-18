#include "main.h"
#include <stdio.h>

/**
 * init_dog - intialize dog
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
