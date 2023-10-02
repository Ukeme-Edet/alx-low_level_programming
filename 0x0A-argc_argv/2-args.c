#include "main.h"
#include <stdio.h>

/**
 * main - The program's entry pont
 * @argc: The number of command line arguments
 * @argv: An array of pointers to the command line arguments
 * Return: 0 if the program is successful
 */
int main(int argc, char *argv[])
{
	int i = 0;
	while (i < argc)
		printf("%s\n", argv[i++]);
	return (0);
}
