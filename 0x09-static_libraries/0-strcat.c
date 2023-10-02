#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The string to be concatenated to
 * @src: The string to be concatenated
 * Return: A pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
