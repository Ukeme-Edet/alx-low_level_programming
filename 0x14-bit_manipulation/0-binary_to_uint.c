#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if b is NULL or contains chars not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num = (num * 2) + (*b++ - '0');
	}
	return (num);
}
