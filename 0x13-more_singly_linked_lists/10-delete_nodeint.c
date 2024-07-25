#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * linked list
 * @head: pointer to head of list
 * @index: index of node to delete (starts at 0);
 * Return: 1 if successful, -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_to_delete, *nodeBefore;
	_uint list_len;

	if (!head || !(*head))
		return (-1);

	list_len = listint_len(*head);
	if (!list_len || index > list_len - 1)
		return (-1);
	if (list_len == 1)
	{
		free(*head);
		*head = NULL;
	}
	else if (list_len > 1)
	{
		if (index > 0)
		{
			nodeBefore = get_nodeint_at_index(*head, index - 1);
			node_to_delete = nodeBefore->next;
			nodeBefore->next = node_to_delete->next;
			free(node_to_delete);
		}
		else
		{
			node_to_delete = *head;
			*head = node_to_delete->next;
			free(node_to_delete);
		}
	}
	return (1);
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
