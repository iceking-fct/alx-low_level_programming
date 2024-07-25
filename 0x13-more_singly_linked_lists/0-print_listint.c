#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes of listint_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t n;
	const listint_t *tmp;

	n = 0;
	if (h)
	{
		tmp = h;
		while (tmp)
		{
			printf("%d\n", tmp->n);
			n++;
			tmp = tmp->next;
		}
	}
	return (n);
}
