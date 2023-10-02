#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout
 * @s: The string to be printed
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i])
		_putchar(s[i++]);
	_putchar('\n');
}
