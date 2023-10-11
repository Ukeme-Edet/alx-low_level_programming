#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the opcodes of its own main function
 * @argc: The number of arguments passed to the program
 * @argv: A pointer to the array of arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
		printf("%02hhx%s", *((char *)main + i), bytes - 1 == i ? "\n" : " ");
	return (0);
}
