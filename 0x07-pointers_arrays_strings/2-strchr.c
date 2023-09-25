#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character c in string s
 * @s: The string to be searched
 * @c: The character to be searching for
 * Return: A pointer to the first occurrence of c in s if it is, else NULL
 */
char *_strchr(char *s, char c)
{
	int i = -1;

	while (s[++i])
	{
		if (s[i] == c)
			return (s[i]);
	}
	return (NULL);
}
