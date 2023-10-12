#include "variadic_functions.c"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line :)
 * @seperator: Thes sting to be printed between the stirngs
 * @n: The number of strings to be printed
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *string;

	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char*);
		printf("%s", string ? string : "(nil)");
		if (i != n - 1 && seperator)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(strings);
}
