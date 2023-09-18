#include "main.h"

/**
 * print_rev - Prints a string in reverse followd by a new line
 * @s: The string to be printed in reverse
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (s[--i])
		_putchar(s[i]);
	_putchar('\n');
}
