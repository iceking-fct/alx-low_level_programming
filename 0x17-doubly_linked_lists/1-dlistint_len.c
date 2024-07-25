#include "lists.h"

/**
 * dlistint_len - Counts the nodes in a linked dlistint_t list
 * @h: the list head pointer
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t node_count = 0, fwd;

	if (!h)
		return (node_count);
	temp = h;
	fwd = !temp->prev ? 1 : 0;
	while (temp)
	{
		node_count++;
		temp = fwd ? temp->next : temp->prev;
	}
	return (node_count);
}
