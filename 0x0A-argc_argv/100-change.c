#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - The program's entry point
 * @argc: The number of arguments passed
 * @argv: An array of pointers to the strings passed as argument
 * Return: 0 if the program is successful
 */
int main(int argc, char *argv[])
{
	int cents, change = 0, i, dns[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents > 0)
	{
		for (i = 0; i < 5; i++)
		{
			while (cents >= dns[i])
			{
				cents -= dns[i];
				change++;
			}
		}
	}
	printf("%d\n", change);
	return (0);
}
