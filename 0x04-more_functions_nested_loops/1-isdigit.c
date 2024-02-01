#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9)
 * @c: argument to be pass
 * Return: 1 for success and 0 for failure
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

