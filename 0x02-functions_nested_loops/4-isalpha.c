#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabet(lower or upper)
 * @c: The character to be cheacked
 * Return: 1 if the character is an alphabet else 0
 */
int _isalpha(int c)
{
	return (!(c < 65 || c > 90) || !(c < 97 || c > 122));
}
