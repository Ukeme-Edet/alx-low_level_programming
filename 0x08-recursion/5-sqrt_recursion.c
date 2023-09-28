#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number whose square root is to be found
 * Return: The natural square root of a number if it exists else -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (msqrt(n, 0));
}

/**
 * msqrt - Checks if i is the sqrt of n recursively
 * @n: The number to find the sqrt of
 * @i: The possible sqrt of n
 * Return: The sqrt of n if n is a perfect square, else -1
 */
int msqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (msqrt(n, i + 1));
}
