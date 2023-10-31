#include "main.h"

/**
 * _pow_recursion - a code that returns the value of x raised to the power of y
 * @x: value to be raised
 * @y: power
 * Return: 0 always
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
