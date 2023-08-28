#include "lists.h"

/**
 * free_listint - free a list
 * @head: head of the list to be free
 */

void free_listint(listint_t *head)
{
	listint_t *free_node;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		free_node = head;
		head = head->next;
		free(free_node);
	}
}
