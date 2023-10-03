#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to be duplicated
 * Return: A pointer to the duplicated string in memory
 */
char *_strdup(char *str)
{
	int i = 0;
	char *p;

	if (str == NULL)
		return (str);
	while (str[i])
		i++;
	p = (char *)malloc((i + 1) * sizeof(char));
	p ? p[i] = str[i] : NULL;
	while (p && i--)
		p[i] = str[i];
	return (p ? p : NULL);
}
