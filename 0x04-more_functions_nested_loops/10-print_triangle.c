#include "main.h"
/**
 * print_blanks - prints ' ' to stdout
 * @n: the number of spaces to print
 * Return: void
 */
void print_blanks(int n)
{
	if (n != 0)
	{
		int i;

		for (i = 1; i <= n; i++)
			putchar(' ');
	}
}

/**
 * print_hash - prints # to stdout
 * @n: the number of #s to print
 * Return: void
 */
void print_hash(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		putchar('#');
	putchar('\n');
}
/**
 * print_triangle - prints a triangle using #
 * @size: size of the triangle
 * If size <=0, \n gets printed
 * can only use the _putchar
 * Return: void
 */
void print_triangle(int size)
{
	int i;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			print_blanks(size - i);
			print_hash(i);
		}
	}
}
