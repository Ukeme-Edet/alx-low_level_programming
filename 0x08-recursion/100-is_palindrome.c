#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to be checked
 * Return: 1 if s is a palindrome else 0
 */
int is_palindrome(char *s)
{
	int i = 0, strl = -1;

	if (s[1] == '\0' || s[0] == '\0')
		return (1);
	strl = rstrlen(s);
	return (checkp(s, 0, strl));
}

/**
 * rstrlen - Gets the length of a string recursively
 * @s: The string whose length is to be gotten
 * Return: The length of the string
 */
int rstrlen(char *s)
{
	if (s[0])
		return (1 + rstrlen(&s[1]));
	return (0);
}

/**
 * checkp - Checks if a sting is a palindrome recursively
 * @s: The string to be checked
 * @i: The current index
 * @sl: The length of the string
 * Return: 1 if the string is a palindrome else 0
 */
int checkp(char *s, int i, int sl)
{
	if (i == (sl / 2) + 1)
		return (1);
	else if (s[i] != s[sl - i - 1])
		return (0);
	else
		return (checkp(s, i + 1, sl));
}
