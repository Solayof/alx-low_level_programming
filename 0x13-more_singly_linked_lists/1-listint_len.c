#include "lists.h"

/**
 * listint_len - print the number of node in a list
 * @h: the head of the list given.
 * Return: returns the number of node in a list.
 */

size_t listint_len(const listint_t *h)

{
	int  num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
