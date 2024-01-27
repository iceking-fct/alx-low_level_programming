#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers and separators
 * @separator: the string to be printed between each numbers
 * @n: number of arguments to be passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list my_list;

	va_start(my_list, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != n - 1)
		{
			printf("%d", va_arg(my_list, int));
			printf("%s", separator);
		}
		else
			printf("%d", va_arg(my_list, int));
	}
	printf("\n");
	va_end(my_list);
}

