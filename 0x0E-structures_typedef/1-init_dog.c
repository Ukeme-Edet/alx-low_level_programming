#include "dog.h"

/**
 * init_dog - Initialises a dog
 * @d: A pointer to the dog struct to be initialised
 * @name: The name of the dog to be initialised
 * @age: The age of the dog to be initialed
 * @owner: The name of the owner of the dog to be initialed
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age  = age;
		d->owner = owner;
	}
}
