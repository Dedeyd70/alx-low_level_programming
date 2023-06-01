#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *new, *next;

	if (head == NULL)
	{
		return;
	}

	for (new = head; new != NULL; new = next)
	{
		next = new->next;
		free(new->str);
		free(new);
	}
}
