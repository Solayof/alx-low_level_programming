#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: pointer to head pointer of a list
 * Return: point
 */the

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (head == NULL || *head == NULL)
		return (NULL);


	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	(*head) = prev;

	return (*head);
}
