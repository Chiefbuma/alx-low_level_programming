#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - struct dog
 * @d: dog
 * @name: The name of the dog.
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
