#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to list head address
 * @n: new node's value
 * Return: ptr to new node on success, NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *temp;
	size_t fwd;

	if (!head)
		return (new_node);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (new_node);
	new_node->n = n;
	if (!(*head))
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		fwd = !(*head)->prev ? 1 : 0;
		temp = *head;
		if (fwd)
		{
			while (temp->next)
				temp = temp->next;
			new_node->next = NULL;
			new_node->prev = temp;
			temp->next = new_node;
		}
		else
		{
			while (temp->prev)
				temp = temp->prev;
			new_node->prev = NULL;
			new_node->next = temp;
			temp->prev = new_node;
		}
	}
	return (new_node);
}
