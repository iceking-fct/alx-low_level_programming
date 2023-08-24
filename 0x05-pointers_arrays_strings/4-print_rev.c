#include "main.h"

/**
 * print_rev - a code that prints a string, in reverse, followed by a new line
 * @s: parameter to be printed
 * Return: Miracle (success)
 */
void print_rev(char *s)
{
	int x;
	int count = 0;

	for (x = 0 ; s[x] != '\0' ; x++)
		count++;
	for (x = count - 1 ; x >= 0 ; x--)
		_putchar(s[x]);
	_putchar('\n');
}
