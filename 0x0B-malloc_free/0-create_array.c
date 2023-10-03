#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of characters, and initialises it with a
 * specific character.
 * @size: The size of the array to be initialised.
 * @c: The character to be initialised in the array.
 * Return: A pointer to the array if successful, else NULL
 */
char *create_array(unsigned int size, char c)
{
	char *p = (char *)malloc(size * sizeof(char));
	unsigned int i = 0;

	while (p && i < size)
		p[i++] = c;
	return (i ? p : NULL);
}
