#include "main.h"

/**
 * print_number - Prints an integer number
 * @n: The integer number to be printed
 */
void print_number(int n)
{
	int i, num_dsc, num_ds = 0, div = 1, nc = n;

	if (n < 0)
	{
		nc = -nc;
		n = -n;
		_putchar('-');
	}
	while (nc > 9)
	{
		nc /= 10;
		num_ds++;
	}
	num_dsc = num_ds;
	while (num_dsc--)
		div *= 10;
	for (i = 0; i < num_ds && div != 0; i++)
	{
		_putchar('0' + n / div);
		n -= ((n / div) * div);
		div /= 10;
	}
	_putchar(n % 10 + '0');
}
