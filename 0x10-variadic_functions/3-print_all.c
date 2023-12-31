#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything :)
 * @format: A list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list fargs;
	unsigned long int i = 0;
	char *sep = ", ", *str;

	va_start(fargs, format);
	while (format && format[i])
	{
		if (!format[i + 1])
			sep = "";
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(fargs, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(fargs, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(fargs, double), sep);
				break;
			case 's':
				str = va_arg(fargs, char*);
				if (!str)
					str = "(nil)";
				printf("%s%s", str, sep);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(fargs);
}
