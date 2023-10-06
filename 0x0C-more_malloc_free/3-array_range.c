#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: The minimum number
 * @max: The maximum number
 * Return: A pointer to an array of integers if successful, else NULL
 */
int *array_range(int min, int max)
{
	int *p = malloc((max - min + 1) * sizeof(int)), i = 0;

	while (p && i < max - min + 1)
	{
		p[i] = min + i;
		i++;
	}
	return (p ? p : NULL);
}
