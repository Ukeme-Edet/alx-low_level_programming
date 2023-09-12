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

/**
 * print_alphabet_x10 - Calls print_alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}
