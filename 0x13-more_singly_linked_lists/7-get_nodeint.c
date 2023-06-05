#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at index
 * @head: head pointer of thelist
 * @index: index of the node to retrive
 * Return: pointer to the nth node ot NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new;

	for (new = head; new != NULL; new = new->next, index--)
	{
		if (index == 0)
			return (new);
	}
	return (NULL);
}
