#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words
 * @str: The string to split
 * Return: Pointer to an array of strings
 */
char **strtow(char *str)
{
	char **ws;
	int i = 0, wc = 0;

	if (!str || !*str)
		return (NULL);
	while (str[i])
	{
		if (str[i] != ' ')
		{
			wc++;
			while (str[i] != ' ' && str[i])
				i++;
		}
		else
			i++;
	}
	ws = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!ws || wc == 0)
		return (NULL);
	ws = copy_words(ws, str, wc);
	return (ws);
}

/**
 * copy_words - Copies words from a string to an array of strings
 * @ws: The array of strings
 * @str: The string to split
 * @wc: The number of words in the string
 * Return: Pointer to the array of strings
 */
char **copy_words(char **ws, char *str, int wc)
{
	int i = 0, j, s;
	char *word;

	while (i < wc && str[j])
	{
		if (str[j] != ' ' && str[j])
		{
			s = j;
			while (str[j] != ' ' && str[j] != '\0')
				j++;
			word = (char *)malloc(sizeof(char) * (j - s + 1));
			if (!word)
			{
				for (i = 0; i < wc; i++)
					free(ws[i]);
				free(ws);
				return (NULL);
			}
			j = s;
			while (word && str[j] != ' ' && str[j] != '\0')
			{
				word[j - s] = str[j];
				j++;
			}
			word[j - s] = '\0';
			ws[i] = word;
			i++;
		}
		j++;
	}
	ws[i] = NULL;
	return (ws);
}
