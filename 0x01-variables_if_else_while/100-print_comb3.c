#include <stdio.h>

/**
 * main - The program entry point
 * Return: 0 if the program is successful
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			if (i == 56 && j == 57)
				continue;
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
