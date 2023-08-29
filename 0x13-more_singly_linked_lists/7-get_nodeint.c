#include "lists.h"

/**
 * get_nodeint_at_index - get a node with a given index.
 * @head: head of the node.
 * @index: indeeex  of the node to get.
 * Return: returns pointer to the given index.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);

	while ( (n < index) && (head != NULL))
	{
		head = head->next;
		n++;
	}

	if (n == index)
		return (head);
	return (NULL);

}
