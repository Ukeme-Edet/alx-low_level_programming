#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Allocates a memory block using malloc and free
 * @ptr: A pointer to the previously allocated block
 * @old_size: The size in bytes of the allocated space for ptr
 * @new_size: The size in bytes for the new memory block
 * Return: A pointer to the reallocated memory if successful, else NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (!ptr)
	{
		p = malloc(new_size);
		return (p ? p : NULL);
	}
	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p)
	{
		char *cp = p;
		char *cptr = ptr;

		for (i = 0; i < new_size && i < old_size; i++)
			cp[i] = cptr[i];
		free(ptr);
		return (p);
	}
	return (NULL);
}
