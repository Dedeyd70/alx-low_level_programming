#include "lists.h"

/**
 * free_listint2 - frees a list and sets head to NULL
 * @head: Pointer to a pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL || *head == NULL)
		return;
	for (new = *head; new != NULL; new = *head)
	{
		*head = (*head)->next;
		free(new);
	}
}
