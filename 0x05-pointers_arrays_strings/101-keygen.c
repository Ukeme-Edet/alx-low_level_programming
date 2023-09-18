#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords for the program
 * 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0, i, n, last;

	srand(time(NULL));
	for (i = 0; i < 58; i++)
	{
		last = (rand() % 89) + '!';
		putchar(last);
		sum += last;
		if (2772 - sum - '!' < 89)
		{
			n = 2772 - sum;
			putchar(n);
			break;
		}
	}
	return (0);
}
