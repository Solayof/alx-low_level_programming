#include "lists.h"

/**
 * delete_nodeint_at_index - delete given indexed node.
 * @head: pointer to the head.
 * @index: given index to delete.
 * Return: returns 1 if succesful.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h, *del;
	unsigned int i;

	while ((i < index - 1) && (h != NULL))
	{
		h = h->next;
		i++;
	}

	if (i = index - 1)
	{
	del = h->next;
	h->next = del->next;
	free(del);
	return (1);
	}

	return (-1);
}
