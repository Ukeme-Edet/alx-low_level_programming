#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: The string to be copied into
 * @src: The string to be copied from
 * @n: The maximum amount of bytes to copy
 * Return: A pointer to the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
