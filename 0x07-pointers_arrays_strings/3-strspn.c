#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: A pointer to the string to be searched
 * @accept: A pointer to the string of bytes acceptable
 * Return: The lenght of substring :)
 */
unsigned int _strspn(char *s, char *accept)
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
				i++;
				break;
			}
		}
		if (j == alen)
			return (i);
	}
	return (i);
}
