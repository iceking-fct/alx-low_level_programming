#include "lists.h"

/**
 * add_dnodeint - Adds node to start of a dlistint_t list
 * @head: address of list head ptr
 * @n: value for the new node
 * Return: address of new node on success. NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;


	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (!(*head) || !(*head)->prev)
	{
		new_node->next = *head;
		if (*head)
			(*head)->prev = new_node;
		new_node->prev = NULL;
	}
	else
	{
		new_node->prev = *head;
		(*head)->next = new_node;
		new_node->next = NULL;
	}
	*head = new_node;
	return (new_node);
}
