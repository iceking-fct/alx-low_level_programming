#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * - Does not print 2 and 4
 * - can only use _putchar twice
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		if (i != 4 && i != 2)
			putchar('0' + i);
		i++;
	}
	 putchar(10);
}
