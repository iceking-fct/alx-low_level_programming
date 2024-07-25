#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given position in
 * a dlistint_t list
 * @h: address of list's head ptr
 * @idx: index of list to insert node
 * @n: the value of the node
 * Return: address of new node if successful or NULL otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL, *curr = NULL, *new_node;
	unsigned int i = 0, fwd;

	if (!(*h) && idx > 0)
		return (NULL);
	if (!idx)
		return (new_node = add_dnodeint(h, n));
	fwd = !(*h)->prev ? 1 : 0, temp = *h;
	while (temp && i < idx)
		i++, curr = temp, temp = fwd ? temp->next : temp->prev;
	if (i != idx)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (curr);
	new_node->n = n;
	if (!temp)
	{
		new_node->next = fwd ? NULL : curr;
		new_node->prev = fwd ? curr : NULL;
		if (fwd)
			curr->next = new_node;
		else
			curr->prev = new_node;
	}
	else
	{
		new_node->next = fwd ? temp : curr;
		new_node->prev = fwd ? curr : temp;
		if (fwd)
			curr->next = new_node, temp->prev = new_node;
		else
			curr->prev = new_node, temp->next = new_node;
	}
	return (new_node);
}
