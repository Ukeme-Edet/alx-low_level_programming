#include "main.h"

/**
 * _pow_recursion - Gets the value of x raised to the power of y
 * @x: The base of the multiplication
 * @y: The power of the multiplication
 * Return: The result of the multiplication :)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1);
}
