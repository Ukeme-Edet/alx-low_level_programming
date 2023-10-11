#include "3-calc.h"

/**
 * op_add - Adds two integers together
 * @a: The first integer
 * @b: The second integer
 * Return: Their sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers
 * @a: The integer to be subtracted from
 * @b: The integer to be subtracted
 * Return: The result of the subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers together
 * @a: The first integer to be multiplied
 * @b: The second integer to be multiplied
 * Return: Their product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers
 * @a: The numerator :)
 * @b: The divisor :)
 * Return: Their quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Gets the modulo of two numbers
 * @a: The numerator
 * @b: The modulo :)
 * Return: The result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
