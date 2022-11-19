#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees d heap memory
 * @d: data type of dog_t
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
