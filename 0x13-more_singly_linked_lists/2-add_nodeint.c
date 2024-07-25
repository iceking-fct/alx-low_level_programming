#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to head of list
 * @n: value to add at that position
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;
	int num = n;

	newNode = malloc(sizeof(listint_t));
	if (!head || !newNode)
		return (NULL);

	newNode->n = num;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
