#include "main.h"
/**
 * print_array - a function that prints n elements of an array of integers
 * followed by a new line
 * @a: array to be used
 * @n: number of elements to be printed
 * Return: Miracle 0 (perfectly done)
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n ; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
			printf(", ");
	}
	printf("\n");
}
