#include "lists.h"


/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: ptr to head of list
 * Return: ptr to reversed list on success, NULL if not possible;
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode, *nextNode;

	if (!head || !(*head))
		return (NULL);
	if (!(*head)->next)
		return (*head);

	prevNode = NULL;
	while (*head)
	{
		nextNode = (*head)->next;
		(*head)->next = prevNode;
		prevNode = *head;
		*head = nextNode;
	}
	*head = prevNode;
	return (*head);
}
