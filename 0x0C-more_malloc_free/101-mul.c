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

	if (argc != 3)
	{
		print_s("Error\n");
		return (98);
	}
	num1 = argv[1];
	num2 = argv[2];
	product = mul(num1, num2);
	if (!product)
	{
		print_s("Error\n");
		return (98);
	}
	print_s(product);
	return (0);
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
	product = malloc(sizeof(char) * (len1 + len2));
	if (!product)
		return (NULL);
	for (i = 0; i < len1 + len2; i++)
		product[i] = '0';
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = (n1 * n2) + (product[i + j + 1] - '0') + carry;
			carry = sum / 10;
			product[i + j + 1] = (sum % 10) + '0';
		}
		if (carry)
		{
			while (carry)
			{
				sum = carry + (product[i + j + 1] - '0');
				carry = sum / 10;
				product[i + j + 1] = (sum % 10) + '0';
				j--;
			}
		}
	}
	if (product[0] == '0')
	{
		for (k = 0; product[k] != '\0'; k++)
			product[k] = product[k + 1];
	}
	product[len1 + len2] = '\0';
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
