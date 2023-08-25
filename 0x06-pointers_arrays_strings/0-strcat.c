#include "main.h"

/**
 * _strcat - a code that will concatenate two different strings
 * @dest: the destination string
 * @src: the source string
 * Return: dest;
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int x;

	for (x = 0 ; dest[x] != '\0' ; x++)
		destlen++;
	for (x = 0 ; src[x] != '\0' ; x++)
		srclen++;

	for (x = 0 ; x <= srclen ; x++)
		dest[destlen + x] = src[x];
	return (dest);
}
