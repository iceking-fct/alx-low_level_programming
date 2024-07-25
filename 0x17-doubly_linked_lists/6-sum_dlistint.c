#include "lists.h"

/**
 * sum_dlistint - Sums all the data (n) of a dlistint_t linked list.
 * @head: ptr to the list head
 * Return: sum of all data(n) values in the list, or 0 if empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0, fwd;
	dlistint_t *temp = NULL;

	if (!head)
		return (sum);
	fwd = !head->prev ? 1 : 0;
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = fwd ? temp->next : temp->prev;
	}
	return (sum);
}
