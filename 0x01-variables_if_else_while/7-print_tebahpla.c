#include <stdio.h>

/**
 * main - The program entry point
 * Return: 0 if the program is successful
 */
int main(void)
{
	int i = 122;

	do {
		putchar(i);
	} while (i-- > 97);
	putchar(10);
	return (0);
}
