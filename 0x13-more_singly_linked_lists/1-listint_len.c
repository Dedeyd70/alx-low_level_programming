#include "lists.h"

/**
 * listint_len - Returning the num of elements in a linked listint_t list
 * @h: The pointer
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
