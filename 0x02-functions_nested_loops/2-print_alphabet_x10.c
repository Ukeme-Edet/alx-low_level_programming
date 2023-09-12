#include "main.h"

/**
 * print_alphabet_x10 - Calls print_alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i = 10, j;

	while (i--)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar(j);
		}
		_putchar(10);
	}
}
