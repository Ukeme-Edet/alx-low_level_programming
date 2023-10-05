#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words
 * @str: The string to be split
 * Return: A pointer to the array of words
 */
char **strtow(char *str)
{
	int i = 0, word_count = 0;
	char **words;

	if (!str || !*str)
		return (NULL);
	while (str[i])
	{
		if (str[i] != ' ')
		{
			word_count++;
			while (str[i] != ' ' && str[i])
				i++;
		}
		else
			i++;
	}
	if (!word_count)
		return (NULL);
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	words = copy_words(words, str, word_count);
	return (words);
}

/**
 * copy_words - Copies the words into the array
 * @words: The array to be copied into
 * @str: The string to be copies from
 * @word_count: The number of words to be copied
 * Return: A pointer to the array of words copied
 */
char **copy_words(char **words, char *str, int word_count)
{
	int i = 0, j = 0, s = 0, word_len = 0;
	char *word;

	while (str[j])
	{
		if (str[j] != ' ')
		{
			word_len = 0;
			s = j;
			while (str[j] != ' ' && str[j])
			{
				word_len++;
				j++;
			}
			word = (char *)malloc((word_len + 1) *
								  sizeof(char));
			if (!word)
			{
				while (--i > -1)
					free(words[i]);
				free(words);
				return (NULL);
			}
			j = s;
			while (str[j] != ' ' && str[j])
			{
				word[j - s] = str[j];
				j++;
			}
			word[j - s] = '\0';
			words[i] = word;
			i++;
		}
		else
			j++;
	}
	words[i] = NULL;
	return (words);
}
