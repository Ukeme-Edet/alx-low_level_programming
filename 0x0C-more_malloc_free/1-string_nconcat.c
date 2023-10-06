#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string to be concatenated
 * @s2: The second string to be concatenated
 * Return: A pointer to the concatenated string if successful, else NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, s1l, s2l;
	char *p;

	while (s1[i]) i++;
	s1l = i;
	while (s2[i - s1l]) i++;
	s2l = i - s1l;
	if (s2l < n) n = s2l;
	p = malloc((s1l + n + 1) * sizeof(char));
	i = 0;
	while (p && s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (p && i - s1l < n)
	{
		p[i] = s2[i - s1l];
		i++;
	}
	p ? p[i] = '\0' : 0;
	return (p ? p : NULL);
}
