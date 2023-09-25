#include "main.h"

/**
 * _strstr - Locates a substring in a string
 * @haystack: A pointer to the string to be checked
 * @needle: A pointer to the string to be searched for
 * Return: A pointer to the begining of the located string if found else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0, nl = 0;

	while (needle[nl])
		nl++;
	while (haystack[i])
	{
		while (needle[j] && haystack[i + j] == needle[j])
			j++;
		if (j == nl)
			return (&haystack[i]);
		j = 0;
		i++;
	}
	return (0);
}
