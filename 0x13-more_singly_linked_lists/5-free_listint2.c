#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to head of list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *oldNode;

	if (head)
	{
		while (*head)
		{
			oldNode = *head;
			*head = oldNode->next;
			free(oldNode);
		}
	}
}
