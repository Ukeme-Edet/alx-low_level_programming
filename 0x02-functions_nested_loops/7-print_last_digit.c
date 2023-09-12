#include "main.h"

/**
 * print_last_digit - Prints the last digit of an integer
 * @n: The integer to print it's last digit
 * Return: the last digit of the integer
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	_putchar('0' + n % 10);
	return (n % 10);
}
