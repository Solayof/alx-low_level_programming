#include "lists.h"



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
