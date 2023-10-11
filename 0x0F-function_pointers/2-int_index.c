#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @array: The array to be searched
 * @size: The size of the array to be searched
 * @cmp: The function to be used to chaeck if an element is a valid result
 * Return: The index of the element if found, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp)
		return (-1);
	while (i < size && !cmp(array[i]))
		i++;
	return (i == size ? -1 : i);
}
