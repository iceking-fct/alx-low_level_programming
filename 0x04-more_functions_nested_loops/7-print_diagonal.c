#include "main.h"

/**
 * print_blanks - function to print spaces to stdout n times.
 * @n: the number of spaces to print
 * Return: void
 */
void print_blanks(int n)
{
	int i;

	if (n != 0)
	{
		for (i = 1; i <= n; i++)
			putchar(' ');
	}
}

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * - If n is 0 or less, the function should only print a \n
 * - The diagonal should end with a \n
 * @n: number of times the \ should be printed.
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
		putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			print_blanks(i - 1);
			putchar('\\');
			putchar('\n');
		}
	}
}
