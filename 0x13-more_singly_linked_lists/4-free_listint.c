#include "lists.h"

/**
 * free_listint - Frees a listint list
 * @head: pointer to head of list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *oldNode;

	if (head)
	{
		while (head)
		{
			oldNode = head;
			head = oldNode->next;
			free(oldNode);
		}
	}
}
