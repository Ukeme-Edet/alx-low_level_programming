#include <stdio.h>

/**
 * main - The program entry point
 * Return: 0 if the program is successful
 */
int main(void)
{
	int i = 97;

	do {
		putchar(i);
	} while (i++ < 122);
	putchar(10);
}
