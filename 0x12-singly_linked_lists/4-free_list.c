#include "lists.h"

/**
 * free_list -  frees a list_t list.
 * @head: ptr to list head
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tempNode;

	if (head)
	{
		while (head)
		{
			tempNode = head;
			head = tempNode->next;
			free(tempNode->str);
			free(tempNode);
		}
	}
}
