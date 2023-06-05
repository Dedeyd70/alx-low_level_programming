#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n) of linked list
 * @head: head pointer to the list
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *new;

	if (head == NULL)
		return (0);
	for (new = head; new != NULL; new = new->next)
		sum += new->n;
	return (sum);
}
