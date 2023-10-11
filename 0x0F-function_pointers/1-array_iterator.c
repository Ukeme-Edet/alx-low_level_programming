#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes a function given as a parameter on each array ele
 * @array: A pointer to the array to be iterated through
 * @size: The size of the array
 * @action: A pointer to the function to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !action)
		return;
	while (i < size)
		action(array[i++]);
}
