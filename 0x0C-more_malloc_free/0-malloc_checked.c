#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The size of memory to be allocated
 * Return: A pointer to the allocated memory if successful
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p)
		return (p);
	exit(98);
}
