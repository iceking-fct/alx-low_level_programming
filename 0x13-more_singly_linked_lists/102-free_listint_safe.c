#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely
 * @h: A pointer to the head of the list
 * Return: The size of free'd list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0, loop = 0;
	listint_t *slow, *fast, *temp;

	if (!h || !(*h))
		return (0);
	slow = *h, fast = *h;
	while (fast && fast->next)
	{
		slow = slow->next, fast = fast->next->next;
		if (slow == fast)
		{
			loop = 1;
			break;
		}
	}
	slow = *h;
	if (loop)
	{
		while (slow != fast)
		{
			temp = slow, slow = slow->next, fast = fast->next;
			free(temp), nodes++;
		}
		slow = slow->next;
		while (slow != fast)
		{
			temp = slow, slow = slow->next;
			free(temp), nodes++;
		}
		free(slow), nodes++, *h = NULL;
	}
	else
	{
		while (slow)
			temp = slow, slow = slow->next, free(temp), nodes++;
		*h = NULL;
	}
	return (nodes);
}
