#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: The string to be concatenated to
 * @src: The string to be concatenated
 * @n: The maximum amount of bytes to concatenate
 * Return: A pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	
	while (dest[i])
		i++;
	while (src[j] && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
