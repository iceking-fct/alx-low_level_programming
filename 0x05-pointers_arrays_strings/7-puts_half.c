#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str: string to be printed
 * Return: Miracle 0 (done)
 */
void puts_half(char *str)
{
	int x, y, count = 0;

	for (x = 0 ; str[x] != '\0' ; x++)
		count++;
	y = (count - 1) / 2;
	for (x = y + 1 ; str[x] != '\0' ; x++)
		_putchar(str[x]);
	_putchar('\n');
}
