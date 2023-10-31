#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns the natural sqrt of a number
 * @n: input value
 * Return: 0 (the resulting sqrt)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	 return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - finding the natural square root of a number
 * @n: number that we want to calculate its square root
 * @i: iterator
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (1);
	return (actual_sqrt_recursion(n, 1 + 1));
}
