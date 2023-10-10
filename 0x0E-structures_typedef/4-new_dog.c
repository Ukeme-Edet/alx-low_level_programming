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
	dog_t *new_dog = malloc(sizeof(dog_t));
	new_dog->name = malloc((_strlen(name) + 1) * sizeof(char));
	new_dog->owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (!new_dog || !new_dog->name || !new_dog-> owner)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strcpy(new_dog->name, name);
	new_dog->owner = _strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}

/**
 * _strlen - Gets the length of a string
 * @s: Pointer to the string
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * _strcpy - Copies a string
 * @dest: The string to be copied into
 * @src: The string to be copied from
 * Return: A pointer to the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i++;
    return (dest);
}
