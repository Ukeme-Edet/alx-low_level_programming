#include "main.h"

/**
 * _strcpy - Copies a string into a buffer :)
 * @dest: The buffer to be copied into
 * @src: The string to be copied
 * Return: A pointer to the buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}
