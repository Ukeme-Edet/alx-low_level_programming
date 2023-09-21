#include "main.h"

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
				if (s[i + 1] > 96 && s[i + 1] < 123)
				{
					s[i + 1] = s[i + 1] - 'a' + 'A';
					i++;
				}
			}
		}
	}
	return (s);
}
