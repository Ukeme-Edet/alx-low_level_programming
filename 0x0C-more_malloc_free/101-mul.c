#include "main.h"
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers together
 * @argc: The number of arguments passed to the program
 * @argv: An array of the arguments passed
 * Return: 0 if the program is successful, else 1
 */
int main(int argc, char **argv)
{
	char *num1, *num2, *product;

	if (argc != 3 || !argv[1] || !argv[2])
		error();
	num1 = argv[1];
	num2 = argv[2];
	if (!is_digit(num1) || !is_digit(num2))
		error();
	product = mul(num1, num2);
	if (!product)
		error();
	print_s(product);
	free(product);
	return (0);
}

/**
 * error - Prints out an error message and exits the program
 */
void error(void)
{
	print_s("Error");
	exit(98);
}

/**
 * is_digit - Checks if a string is a digit
 * @s: The string to be checked
 * Return: 1 if the string is a digit, else 0
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * print_s - Prints out a string using _putchar
 * @s: The string to be printed out
 */
void print_s(char *s)
{
	unsigned int i = 0;

	while (s[i])
		_putchar(s[i++]);
	_putchar('\n');
}

/**
 * mul - Multiplies two numbers together
 * @num1: The first number to be multiplied
 * @num2: The second number to be multiplied
 * Return: A pointer to the product of the two numbers
 */
char *mul(char *num1, char *num2)
{
	int len1, len2, i, j, k, carry, n1, n2, sum;
	char *product;

	len1 = _strlen(num1);
	len2 = _strlen(num2);
	product = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!product)
		return (NULL);
	for (i = 0; i < len1 + len2; i++)
		product[i] = '0';
	for (i = len1 - 1; i > -1; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';
		for (j = len2 - 1; j > -1; j--)
		{
			n2 = num2[j] - '0';
			sum = (n1 * n2) + carry;
			carry = sum / 10;
			product[i + j + 1] += (sum % 10);
		}
		if (carry)
			product[i + j + 1] += carry;
	}
	k = 0;
	for (i = 0; i < len1 + len2; i++)
	{
		if (product[i] != '0')
			k = 1;
		if (k)
			product[k++] = product[i];
	}
	return (product);
}

/**
 * _strlen - Returns the length of a string
 * @s: The string to get the length of
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
