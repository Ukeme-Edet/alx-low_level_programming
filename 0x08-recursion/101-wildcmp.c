#include "main.h"

/**
 * Compares two srtings to check if they are identical
 * @s1: The actual string
 * @s2: The possible string
 * Return: 1 if the two strings can be considered equal else 0
 */
int wildcmp(char *s1, char *s2)
{
	if (!s1[0])
	{
		if (s2[0] && s2[0] == '*')
			return (wildcmp(s1, s2 + 1));
		return (!s2[0]);
	}
	if (s2[0] == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	else if (s1[0] == s2[0])
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}