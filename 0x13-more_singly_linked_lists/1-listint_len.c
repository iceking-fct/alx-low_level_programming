#include "lists.h"

/**
 * listint_len - calculates num of elements of a listint_t list
 * @h: pointer to head of list
 * Return: number of nodes in list
 */
size_t listint_len(const listint_t *h)
{
	size_t n;
	const listint_t *tmp;

	n = 0;
	if (h)
	{
		tmp = h;
		while (tmp)
		{
			n++;
			tmp = tmp->next;
		}
	}
	return (n);
}
