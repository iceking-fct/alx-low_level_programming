#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data (n) of a
 * listint_t linked list.
 * @head: pointer to head of list
 * Return: sum of data items. 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *currNode;
	int sum;

	if (!head)
		return (0);

	sum = 0;
	currNode = head;
	while (currNode)
	{
		sum += (currNode->n);
		currNode = currNode->next;
	}
	return (sum);
}
