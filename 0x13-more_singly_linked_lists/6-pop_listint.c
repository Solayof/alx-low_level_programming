#include "lists.h"

/**
 * pop_listint - deletes the head node of a list.
 * @head: head pointer.
 * Return: returns the data stored in the deleted node.
 */

int pop_listint(listint_t **head)
{
	int node_n;
	listint_t *del_node;

	if (*head == NULL)
		return (0);
	del_node = *head;
	*head = del_node->next;
	node_n = del_node->n;
	free(del_node);
	return (node_n);
}
