#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - The program entry point
 * @argc: The number of command line arguments passed
 * @argv: An array of pointers to strings of the commandline arguments
 * Return: 0 if successful, else 1
 */
int main(int argc, char *argv[])
{
	int i = 1, res = 0, next;

	while (i < argc)
	{
		next = atoi(argv[i]);
		if (next)
			res += next;
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", res);
	return (0);
}
