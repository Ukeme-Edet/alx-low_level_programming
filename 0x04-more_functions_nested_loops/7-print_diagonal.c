#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: The length of the line to be drawn
 */
void print_diagonal(int n)
{
	int i, c = 0;

	if (n < 1)
	{
		_putchar('\n');
		return;
	}
	while (n--)
	{
		for (i = 0; i < c; i++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		c++;
	}
}
