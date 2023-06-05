#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at the given index
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 * Return: 1 if succeeded and -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new, *old;
	unsigned int cnt = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	new = *head;
	old = NULL;
	if (index == 0)
	{
		*head = (*head)->next;
		free(new);
		return (1);
	}
	while (new != NULL && cnt < index)
	{
		old = new;
		new = new->next;
		cnt++;
	}
	if (new == NULL)
		return (-1);
	old->next = new->next;
	free(new);
	return (1);
}
