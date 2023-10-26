#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1
 * @n: The number to be set
 * @index: The index to set the value at
 * Return: 1 if it worked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	*n |= (1 << index);
	return (1);
}
