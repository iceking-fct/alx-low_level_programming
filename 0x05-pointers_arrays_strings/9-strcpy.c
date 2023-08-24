#include "main.h"
/**
 * *_strcpy - a function that copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: destination
 * @src: source
 * Return: Miracle 0 (achieved)
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0 ; src[x] != '\0' ; x++)
		dest[x] = src[x];
	dest[x] = '\0';
	return (dest);
}
