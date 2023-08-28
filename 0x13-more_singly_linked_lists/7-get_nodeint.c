#include "lists.h"

/**
 * get_nodeint_at_index - get a node with a given index.
 * @head: head of the node.
 * @index: indeeex  of the node to get.
 * Return: returns pointer to the given index.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h;
	int n;

	h = head;
	for (n = 0; (n < index) && (h != NULL); n++)
		h = h->next;

	if (h == NULL)
		return (NULL);
	return (h);

}
