#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: A pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *slow, *fast;

	if (!head)
		return (0);
	slow = head, fast = head;
	while (fast && fast->next)
	{
		slow = slow->next, fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				slow = slow->next, fast = fast->next, nodes++;
			}
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next, nodes++;
			while (slow != fast)
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				slow = slow->next, nodes++;
			}
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			return (nodes);
		}
	}
	slow = head;
	while (slow)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		nodes++, slow = slow->next;
	}
	return (nodes);
}
