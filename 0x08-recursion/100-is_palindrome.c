#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to be checked
 * Return: 1 if s is a palindrome else 0
 */
int is_palindrome(char *s)
{
	int i = 0, strl = -1;

	if (s[1] == '\0' || s[0] == '\0')
		return (1);
	strl = rstrlen(s);
	while (i <= strl / 2)
	{
		if (s[i] != s[strl - i - 1])
			return (0);
		i++;
	}
	return (1);
}

/**
 * rstrlen - Gets the length of a string recursively
 * @s: The string whose length is to be gotten
 * Return: The length of the string
 */
int rstrlen(char *s)
{
	if (s[0])
		return (1 + rstrlen(&s[1]));
	return (0);
}
