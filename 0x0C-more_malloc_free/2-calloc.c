#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc and initialises it to 0
 * @nmemb: The number of elements in the array
 * @size: The size of each element in the array
 * Return: A pointer to the array if suxxessful, else NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *ptr;

	if (size < 1 || nmemb < 1)
		return (NULL);
	ptr = malloc(nmemb * size);
	while (ptr && i < nmemb * size)
		ptr[i++] = 0;
	return (ptr ? (void *)ptr : NULL);
}
