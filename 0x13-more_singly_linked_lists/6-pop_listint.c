#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head pointer to the list
 * Return: the head node's data(n)
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	tmp = *head;
	data = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (data);
}
