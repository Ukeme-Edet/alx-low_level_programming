#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums all its parameters
 * @n: The number of parameters passed to it
 * Return: The sum of its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list operands;
	int sum = 0;
	unsigned int i;

	va_start(operands, n);
	for (i = 0; i < n; i++)
		sum += va_arg(operands, int);
	va_end(operands);
	return (sum);
}
