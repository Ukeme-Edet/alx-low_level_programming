#include "main.h"

/**
 * _strlen - Gets the length of a string
 * @s: Pointer to the string
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i = 0;
	char str[] = *s;

	while (str[i])
		i++
	return (i);
}
