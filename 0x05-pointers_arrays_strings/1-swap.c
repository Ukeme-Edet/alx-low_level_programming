#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: Pointer to the first integer to be swapped
 * @b: Pointer to the second integer to be swapped
 */
void swap_int(int *a, int *b)
{
	int *c = a;
	*a = *b;
	*b = *c;
}
