#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to head of list
 * @n: value to add at that position
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;
	int num = n;

	newNode = malloc(sizeof(listint_t));
	if (!head || !newNode)
		return (NULL);

	newNode->n = num;
	newNode->next = NULL;
	if (!(*head))
		*head = newNode;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = newNode;
	}
	return (newNode);
}
