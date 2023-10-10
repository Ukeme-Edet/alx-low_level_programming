#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints the name of the file it was compiled from
 * Return: 0 if successful
 */
int main()
{
	printf("%s\n", __FILE__);
	return (0);
}
