#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of a list.
 * @head: head pointer.
 * @n: intiger to be stored in the node.
 * Return: returns the address of the new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *h;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		h = *head;
		while (h->next != NULL)
			h = h->next;

		h->next = new;
	}
	return (new);
}
