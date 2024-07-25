#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to head of list
 * @index: index of node in question starting at 0
 * Return: value at nth node or NULL if NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *oldNode;
	_uint i;

	if (!head)
		return (NULL);

	i = 0;
	oldNode = head;
	while (i < index)
	{
		if (!(oldNode->next))
			return (NULL);
		oldNode = oldNode->next, i++;
	}
	return (oldNode);
}
