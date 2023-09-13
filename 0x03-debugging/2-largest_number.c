#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int temp;

	if (c > b)
	{
		temp = b;
		b = c;
		c = temp;
	}
	if (b > a)
	{
		temp = a;
		a = b;
		b = temp;
	}

	return (a);
}
