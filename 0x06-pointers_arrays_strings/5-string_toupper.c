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
		if (s[i] > 96 && s[i] < 123)
			s[i] = 'A' + (s[i] - 'a');
		i++;
	}
	return (s);
}
