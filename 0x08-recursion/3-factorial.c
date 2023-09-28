#include "main.h"

/**
 * factorial - Gets the factorial of a number
 * @n: The number to get the factorial of
 * Return: Thr factorial of the number if n > -1 else -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
