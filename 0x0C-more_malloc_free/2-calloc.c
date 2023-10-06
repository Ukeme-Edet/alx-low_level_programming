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
	void *p = malloc(nmemb * size);
	unsigned int i = 0;

	if (!p)
		return (NULL);
	char *ptr = p;

	while (i < nmemb)
		ptr[i++] = 0;
	return ((void *)ptr);
}
