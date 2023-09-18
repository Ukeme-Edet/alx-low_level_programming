#include "main.h"

/**
 * puts_half - Prints half of the string
 * @str: The string to be printed
 */
void puts_half(char *str)
{
	int len = 0, i = 0;

	while (str[i])
		i++;
	len = i;
	for (i = len - (len / 2); i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
