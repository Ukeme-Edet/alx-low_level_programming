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
	int i = 1, res = 0, next, j;

	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		next = atoi(argv[i]);
		if (next < 0)
			continue;
		res += next;
		i++;
	}
	printf("%d\n", res);
	return (0);
}
