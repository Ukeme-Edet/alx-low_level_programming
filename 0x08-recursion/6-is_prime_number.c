#include "main.h"

/**
 * is_prime_number - Checks if a number is prime or not
 * @n: The number to be checked
 * Return: 1 of the number is prime else 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_div(n, 2));
}

/**
 * is_div - Checks if a number is divisible by another number
 * @n: The number to be checked
 * @i: The divisor
 * Return: 0 if the number is divisible by i else 1
 */
int is_div(int n, int i)
{
	if (i == n)
		return (1);
	else if (n % i == 0)
		return (0);
	return (is_div(n, i + i));
}
