#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: The name of the new dog to be created
 * @age: The age of the new dog to be created
 * @owner: The owner of the new dog to be created
 * Return: A pointer to the new dog created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int sl = 0;
	char *new_name = malloc(sizeof(char *)), *new_owner = malloc(sizeof(char *));
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (!new_dog)
		return (NULL);
	while (name[sl])
	{
		new_name[sl] = name[sl];
		sl++;
	}
	new_dog->name = new_name;
	sl = 0;
	while (owner[sl])
	{
		new_owner[sl] = owner[sl];
		sl++;
	}
	new_dog->owner = new_owner;
	new_dog->age = age;
	return (new_dog);
}
