#include <stdio.h>

/**
 * main - The program entry point
 * Return: 0 if successful
 */
int main(void)
{
	int i = 0;

	while (i++ < 100)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
