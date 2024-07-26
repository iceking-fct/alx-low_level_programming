#include "main.h"

/**
 * fizbuzz - print fizz, buzz or fizzbuzz
 * @n: number to fizzbuzz
 * Return: void
 */
void fizbuzz(int n)
{
	if (!(n % 3) && !(n % 5))
		printf("FizzBuzz");
	else if (!(n % 3) && (n % 5))
		printf("Fizz");
	else if ((n % 3) && !(n % 5))
		printf("Buzz");
	else
		printf("%d", n);
}
/**
 * main - Entry point
 * A program that does fizbuzz
 *
 * Return: 0 always
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		fizbuzz(i);
		if (i != 100)
			putchar(' ');
		else
			putchar('\n');
	}
	return (0);
}
