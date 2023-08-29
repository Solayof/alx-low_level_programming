#include "lists.h"

/*sum_listint - sum all the intigers stored by the node of a list.
 * @head: head pointer to the list.
 * Return: returns the sum of the intiger.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NUll)
		return (sum);

	while (head != NULL)
	{
		sum = head->n;
		head = head->next;
	}
	return (sum);
}
