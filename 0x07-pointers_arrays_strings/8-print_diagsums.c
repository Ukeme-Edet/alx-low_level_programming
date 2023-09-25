#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the sum of a square matrix of integers
 * @a: A pointer to the first element in the array :_)
 * @size: The size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i, lsum = 0, rsum = 0;
	int adj = 0;

	for (i = 0; i < size; i++)
	{
		adj = (i * size) + i;
		lsum += *(a + adj);
		adj = (i * size) + size - 1 - i;
		rsum += *(a + adj);
	}
	printf("%d, %d\n", lsum, rsum);
}
