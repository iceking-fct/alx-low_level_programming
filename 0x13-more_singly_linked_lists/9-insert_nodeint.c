#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * in a listint_t list.
 * @head: pointer to head of list
 * @idx: index to insert (starts at 0);
 * @n: value to insert
 * Return: ptr to new node on success. NULL if failed or impossible to add.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *oldNode, *newNode;
	_uint list_len;

	newNode = malloc(sizeof(listint_t));
	if (!head || !newNode || (!(*head) && idx))
		return (NULL);

	list_len = listint_len(*head);
	if (idx > list_len)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	if (idx > 0)
	{
		oldNode = get_nodeint_at_index(*head, idx - 1);
		newNode->next = oldNode->next;
		oldNode->next = newNode;
	}
	else
	{
		oldNode = *head;
		newNode->next = oldNode;
		*head = newNode;
	}
	return (newNode);
}

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

/**
 * get_nodeint_at_index - returns the nth node of a listint_t lnked list.
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
