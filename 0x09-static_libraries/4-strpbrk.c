#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: A pointer to the string to be searched
 * @accept: A pointer to the string of bytes to be found
 * Return: A pointer to the byte in accept found in s if found, else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0, alen = 0;

	while (accept[alen])
		alen++;
	while (s[i])
	{
		for (j = 0; j < alen; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
		i++;
	}
	return (0);
}
