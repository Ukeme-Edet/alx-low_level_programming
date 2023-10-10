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
	char *new_name, *new_owner;
	dog_t *new_dog = malloc(sizeof(dog_t));

	while (name[sl])
		sl++;
	new_name = malloc((sl  + 1) * sizeof(char));
	sl = 0;
	while (owner[sl])
		sl++;
	new_owner = malloc((sl + 1) * sizeof(char));
	if (!new_dog || !new_name || !new_owner || !name || !owner)
		return (NULL);
	sl = 0;
	while (name[sl])
	{
		new_name[sl] = name[sl];
		sl++;
	}
	new_name[sl] = '\0';
	new_dog->name = new_name;
	sl = 0;
	while (owner[sl])
	{
		new_owner[sl] = owner[sl];
		sl++;
	}
	new_owner[sl] = '\0';
	new_dog->owner = owner;
	new_dog->age = age;
	return (new_dog);
}
