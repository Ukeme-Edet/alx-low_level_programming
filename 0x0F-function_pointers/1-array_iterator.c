#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each array ele
 * @array: A pointer to the array to be iterated through
 * @size: The size of the array
 * @action: A pointer to the function to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
		return;
	while (size--)
		action(array[size]);
}
