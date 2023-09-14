#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: The size of the rectangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
			_putchar(' ');
		for (; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
}
