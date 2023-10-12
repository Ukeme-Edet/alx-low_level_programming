#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers followed by a new line :)
 * @seperator: The string to be printed between numbers
 * @n: The number of integers to be printed
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n && seperator; i++)
	{
		printf("%d", va_arg(nums, int));
		if (i != n - 1)
			printf("%s", seperator);
		else
			printf("\n");
	}
	va_end(nums);
}
