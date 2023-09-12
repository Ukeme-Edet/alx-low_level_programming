#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all integer numbers from n to 98
 * @n: The integer to start with
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf(n);
		if (n < 98)
			n++;
		else
			n--;
		_putchar(',');
		_putchar(' ');
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
