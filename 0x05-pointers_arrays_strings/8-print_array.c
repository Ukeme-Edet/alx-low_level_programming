#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints out n elements of an array of integers
 * @a: The array to be printed from
 * @n: The number of elements to print from the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n && a[i]; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
