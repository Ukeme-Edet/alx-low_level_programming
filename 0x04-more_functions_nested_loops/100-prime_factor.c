#include <stdio.h>
#include <math.h>

/**
 * main - The program entry point
 * Return: 0 if the program is successful :)
 */
int main(void)
{
	long int num = 612852475143;
	long int i, ans, max = num / 2;

	for (i = 2; i < max + 1 && num > 1; i++)
	{
		while (num % i == 0)
		{
			ans = i;
			num /= i;
		}
	}
	printf("%ld\n", ans);
	return (0);
}
