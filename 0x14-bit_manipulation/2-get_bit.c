#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: The number to be evaluated
 * @index: The index to get the value at
 * Return: The value of the bit at index, or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (sizeof(unsigned long int) * 8 - 1)) ? -1 :
		(int)(n >> index) & 1);
}
