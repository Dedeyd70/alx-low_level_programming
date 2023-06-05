#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: pointer to the beginning of the list
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	for (new = head; new != NULL; new = head)
	{
		head = head->next;
		free(new);
	}
}
