#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: A pointer to a dog type structure.
 * @name: The dog type structure's name.
 * @age: The dog type structure's age.
 * @owner: The dog type structure's owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
