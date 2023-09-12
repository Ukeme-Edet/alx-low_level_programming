#include "main.h"

/**
 * print_to_98 - Prints all integer numbers from n to 98
 * @n: The integer to start with
 */
void print_to_98(int n)
{
	for (; n < 99; n++)
	{
		if (n > 10)
			_putchar(n / 10 + '0');
		putchar(n % 10 + '0');
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
