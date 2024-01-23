#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs.
 * @d: A pointer to a dog_t type structure.
 *
 * Return: void.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if ((*d).name)
			free((*d).name);
		if ((*d).owner)
			free(d->owner);
	free(d);
	}
}
