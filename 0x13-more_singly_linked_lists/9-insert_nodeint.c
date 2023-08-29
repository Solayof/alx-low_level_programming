#include "lists.h"



listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *h, *tmp;
	int i = 0;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	h = *head;

	while ((i < idx) && (h != NULL))
	{
		tmp = h;
		h = h->next;
		i++;
	}

	if (idx = 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	if (i == idx)
	{
		new->next = h;
		tmp = new;
		return (tmp);

	}

	free(new);
	return (NULL);
}
