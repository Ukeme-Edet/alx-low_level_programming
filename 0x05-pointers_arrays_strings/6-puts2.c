#include "main.h"

/**
 * puts2 - Given a string, prints every other character of the string
 * @str: The string to be printed out
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (i % 2 == 1)
			continue;
		_putchar(str[i]);
	}
}
