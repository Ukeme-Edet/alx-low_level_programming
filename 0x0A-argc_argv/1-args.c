#include "main.h"
#include <stdio.h>

/**
 * main - The program entry point
 * @argc: The number of command line arguments passed
 * @argv: The array of pointers to stings of arguments passed
 * Return: 0 if the program is successful
 */
int main(int argc, char *argv[] __atribute__((unused)))
{
	printf("%d", argc - 1);
	return (0);
}
