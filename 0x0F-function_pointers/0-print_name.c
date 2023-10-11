#include "function_pointers.h"

/**
 * print_name - Prints a name by calling a function passing it the name :)
 * @name: The name to be printed
 * @f: A pointer to the funtion to be used to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
