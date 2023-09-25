#include "main.h"

/**
 * _memcpy - Copies n bytes from a memory area to another
 * @dest: The memory area to be copied to
 * @src: The memory area to be copied from
 * @n: The number of bytes to be copied from dest
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		dest[i++] = src[i];
	return (dest);
}
