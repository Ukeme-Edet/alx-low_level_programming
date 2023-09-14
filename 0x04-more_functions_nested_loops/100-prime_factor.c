#include <stdio.h>
#include <math.h>

/**
 * main - The program entry point
 * Return: 0 if the program is successful :)
 */
int main(void)
{
	long int num = 612852475143;
	long int i;

	for (i = 2; i < num / 2; i++)
	{
		if (num % i == 0)
		{
			printf("%ld\n", num / i);
			break;
		}
	}
	return (0);
}
