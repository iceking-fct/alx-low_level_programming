#include "lists.h"

/**
 * print_list - a function that prints all elements of a list_t list
 * @h: head of the singly linked list
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t elements;

	elements = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		elements++;
	}
	return (elements);
}
