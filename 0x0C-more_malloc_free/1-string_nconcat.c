#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string to be concatenated
 * @s2: The second string to be concatenated
 * @n: The max amount of bytes from s2 to be concatenated
 * Return: A pointer to the concatenated string if successful, else NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1l = 0, s2l = 0;
	char *p;

	while (s1 && s1[s1l])
		s1l++;
	while (s2 && s2[s2l])
		s2l++;
	if (s2l < n)
		n = s2l;
	p = malloc((s1l + n + 1) * sizeof(char));
	if (p)
		p[s1l + n] = '\0';
	while (p && n--)
		p[s1l + n] = s2[n];
	while (p && s1l--)
		p[s1l] = s1[s1l];
	return (p ? p : NULL);
}
