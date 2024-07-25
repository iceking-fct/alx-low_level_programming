#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node in a dlistint list
 * @head: ptr to head of list
 * @index: index of node to get
 * Return: ptr to node on success, NULL otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int idx = 0, fwd;

	if (!head)
		return (temp);
	fwd = !head->prev ? 1 : 0;
	temp = head;
	while (temp && idx < index)
	{
		idx++;
		temp = fwd ? temp->next : temp->prev;
	}
	return (idx == index ? temp : NULL);
}
