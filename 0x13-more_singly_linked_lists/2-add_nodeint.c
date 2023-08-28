#include "lists.h"

/**
 * add_nodeint - add node at the beginning of a list.
 * @head: the head of the lsit.
 * @n: intiger to store in the node.
 * Return: returns the head if successful.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
