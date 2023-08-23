#include "main.h"
/**
 * swap - this code swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */
void swap(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
