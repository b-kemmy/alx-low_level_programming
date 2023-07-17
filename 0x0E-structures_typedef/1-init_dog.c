#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes the dog structure
 * @d: Dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: Always 0 (Success)
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
