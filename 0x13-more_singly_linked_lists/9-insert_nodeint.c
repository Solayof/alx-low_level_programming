#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at a given index.
 * @head: head of the list.
 * @n: intiger to stored.
 * @idx: position to insert the node.
 * Return: returns pointer to the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *h;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	h = *head;

	while ((i < idx - 1) && (h != NULL))
	{
		/*tmp = h;*/
		h = h->next;
		i++;
	}

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	if (i == idx - 1)
	{
		new->next = h->next;
		h->next = new;
		return (new);

	}

	free(new);
	return (NULL);
}
