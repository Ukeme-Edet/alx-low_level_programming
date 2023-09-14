#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
	int i = 47;

	while (i++ < 58)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar(i);
	}
	_putchar(i);
}
