#include "lists.h"



listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h;
	int n;

	h = head;
	for (n = 0; n < index && h != NULL; n++)
		h = h->next;

	if (h == NULL)
		return (NULL);
	return (h);

}
