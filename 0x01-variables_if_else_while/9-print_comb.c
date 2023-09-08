#include <stdio.h>

/**
 * main - The program entry point
 * Return: 0 if the program is successful
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i++);
		if (i == 58)
			continue;
		putchar(44);
		putchar(32);
	}
	putchar(10);
	return (0);
}
