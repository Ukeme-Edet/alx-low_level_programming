#include "main.h"

/**
 * cap_char - Capitalizes a character
 * @c: The character to be capitalised
 * Return: The capitalised character
 */
char cap_char(char c)
{
	if (c > 96 && c < 123)
		return (c - 'a' + 'A');
	return (c);
}

/**
 * cap_string - Capitalizes all words of a string
 * @s: The string to be manipulated :)
 * Return: A pointer to the capitalised string
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char seps[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')'
		, '{', '}'};

	while (s[i])
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == seps[j] && s[i + 1])
			{
				s[i + 1] = cap_char(s[i + 1]);
			}
		}
		i++;
	}
	return (s);
}
