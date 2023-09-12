#include <stdio.h>

/**
 * print_alphabet - Prints the alphabet in lowercase
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar(10);
}
