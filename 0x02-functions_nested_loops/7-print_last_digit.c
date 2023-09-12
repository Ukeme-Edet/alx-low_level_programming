#include "main.h"

/**
 * print_last_digit - Prints the last digit of an integer
 * @n: The integer to print it's last digit
 * Return: the last digit of the integer
 */
int print_last_digit(int n)
{
	int nm;

	if (n < 0)
		n = -n;
	nm = n % 10;
	if (nm < 0)
		nm = -nm;
	_putchar(nm + '0');
	return (nm % 10);
}
