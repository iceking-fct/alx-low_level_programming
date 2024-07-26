#include "main.h"

/**
 * make_square - prints # to stdout n times followed by a \n
 * @n: the number of times to print #
 * Return: void
 */
void make_square(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		putchar('#');
	putchar('\n');
}
/**
 * print_square - a function to print a square of #s followed by \n
 * @size: number of #s to print (row and col)
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
		putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= size; i++)
			make_square(size);
	}
}
