#include <stdio.h>

/**
 * main - The program entry point
 * Return: 0 if the program is successful
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		if (i != 101 && i != 113)
			putchar(i);
	putchar(10);
	return (0);
}
