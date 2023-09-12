#include "main.h"

/**
 * _islower - Checks if a character is a lowercase letter
 * @c: The character to checked
 * Return: 1 if the character is a lower case letter else 1
 */
int _islower(int c)
{
	return (!(c > 'z' || c < 'a'));
}
