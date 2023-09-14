#include <stdio.h>
#include <math.h>

/**
 * main - The program entry point
 * Return: 0 if the program is successful :)
 */
int main(void)
{
	long long int num = 612852475143;
	long int i, max = (long int) sqrt(num);
	long int ans = 0;

	for (i = 1; i < max + 1; i++)
	{
		if (num % i == 0)
			ans = i;
	}
	printf("%ld", ans);
	return (0);
}
