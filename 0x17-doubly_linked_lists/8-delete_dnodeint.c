#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given position in
 * a dlistint_t list
 * @head: address of list's head ptr
 * @index: index (0 based) node to delete.
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int i = 0, fwd;

	if (!head || !(*head))
		return (-1);
	fwd = !(*head)->prev ? 1 : 0, temp = *head;
	while (temp && i < index)
		i++, temp = fwd ? temp->next : temp->prev;
	if (i != index || !temp)
		return (-1);
	if (!temp->next && !temp->prev)
		*head = NULL;
	else if (temp->next && temp->prev)
	{
		temp->next->prev = temp->prev;
		temp->prev->next = temp->next;
	}
	else if (temp->next && !temp->prev)
	{
		temp->next->prev = temp->prev;
		if (fwd)
			*head = temp->next;
	}
	else
	{
		temp->prev->next = temp->next;
		if (!fwd)
			*head = temp->prev;
	}
	free(temp);
	return (1);
}
