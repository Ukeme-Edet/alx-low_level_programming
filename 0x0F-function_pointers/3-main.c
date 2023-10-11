#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that performs simple arithmetic operations
 *
 * Desctiption: It can perform operations such as additions(+),
 * subtractions(-), multiplications(*), divisions(/) and
 * modulo(%) :)
 *
 * @argc: The number of arguments passed to the program
 * @argv: A pointer to the array of arguments
 * Return: 0 of successful
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] || !get_op_func(argv[2]))
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[3]) == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
