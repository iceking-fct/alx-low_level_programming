#include "main.h"
#include <math.h>

/**
 * main - Write a program that finds and prints the largest prime factor of the
 * number 612852475143, followed by a new line.
 * Return: 0 always
 */
int main(void)
{
	long int num, count, sqr;

	num = 612852475143;
	sqr = sqrt(num);

	for (count = 3; count <= sqr; count += 2)
	{
		while (!(num % count))
			num /= count;
	}

	/* print final value of temp (highest prime factor) */
	printf("%lu\n", num);
	return (0);
}
