#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: pointer to head of list
 * Return: head nodes data or 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *oldNode;
	int head_data;

	if (!head || !(*head))
		return (0);
	head_data = (*head)->n;
	oldNode = *head;
	*head = oldNode->next;
	free(oldNode);
	return (head_data);
}
