#include "lists.h"

/**
 *print_listint - prints all the node of a list.
 *@h: head of the list
 *
 *Return: returns the number of element printed in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (n);

	while (h != NULL)
	{
		printf("%d", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
