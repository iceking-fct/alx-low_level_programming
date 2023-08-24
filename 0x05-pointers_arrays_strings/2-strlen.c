#include "main.h"

/**
 * _strlen - This code will return the lenght of a string
 * @s: string to be counted
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int x;
	int count = 0;

	for (x = 0 ; s[x] != '\0' ; x++)
		count++;
	return (count);
}
