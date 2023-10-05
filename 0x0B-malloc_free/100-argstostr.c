#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Calculates the length of a string
 * @s: The string whose length is to be calculated
 * Return: The length of the string
 */
int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * argstostr - Concatenates all the arguments to the program
 * @ac: The number of arguments
 * @av: The arguments
 * Return: A pointer to the concatenated string if successful, else NULL
 */
char *argstostr(int ac, char **av)
{
	int i = 0, total_len = 0, j;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
		total_len += _strlen(av[i++]);
	p = (char *)malloc((total_len + ac) * sizeof(char) + 1);
	total_len = 0;
	for (i = 0; p && i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			p[total_len + j] = av[i][j];
			j++;
		}
		p[total_len + j] = '\n';
		total_len += j + 1;
	}
	if (p)
		p[total_len] = '\0';
	return (p ? p : NULL);
}
