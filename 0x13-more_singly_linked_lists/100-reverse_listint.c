#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: pointer to the head of list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL;
	listint_t *new = *head;

	while (*head != NULL)
	{
		*head = (*head)->next;
		new->next = old;
		old = new;
		new = *head;
	}
	*head = old;
	return (*head);

}
