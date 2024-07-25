#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: ptr to  list head
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	size_t fwd;

	if (head)
	{
		fwd = !head->prev ? 1 : 0;
		if (fwd)
		{
			while (head)
			{
				temp = head, head = head->next;
				free(temp);
			}
		}
		else
		{
			while (head)
			{
				temp = head, head = head->prev;
				free(temp);
			}
		}
	}
}
