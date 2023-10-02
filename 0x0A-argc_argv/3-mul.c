#include "main.c"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - The program's entry point :)
 * @argc: The number of command line arguments passed
 * @argv: An array of pointers to the strings of arguments passed
 * Return: 0 if the program is successful, else 1
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
