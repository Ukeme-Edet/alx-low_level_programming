#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string to be concatenated
 * @s2: The second string to be concatenated
 * Return: A pointer to the concatenated string if successful, else NULL;
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, size1 = 0, size2 = 0;
	char *p;

	while (s1 && s1[i])
		i++;
	size1 += i;
	i = 0;
	while (s2 && s2[i])
		i++;
	size2 += i;
	i = 0;
	p = (char *)malloc((size1 + size2 + 1) * sizeof(char));
	while (p && i < size1)
	{
		p[i] = s1[i];
		i++;
	}
	while (p && i < size1 + size2)
	{
		p[i] = s2[i - size1];
		i++;
	}
	p ? p[i] = '\0' : 0;
	return (p ? p : NULL);
}
