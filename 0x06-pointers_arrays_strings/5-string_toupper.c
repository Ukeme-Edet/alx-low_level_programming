#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @s: The string to be promoted :)
 * Return: A pointer to the uppercase string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < 97)
			s[i] = s[i] - 65 + 'A';
		i++;
	}
	return (s);
}
