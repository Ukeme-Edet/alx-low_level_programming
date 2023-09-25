#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: A ponter to the starting point of the memory area to be written to
 * @b: The byte to be written to memory
 * @n: The number of bytes to be written to memory
 * Return: A pointer to the memory written to
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		s[i++] = b;
	return (s);
}
