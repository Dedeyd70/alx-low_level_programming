#include "lists.h"
#include <stddef.h>

/**
 * list_len - A function that returns the number of elements
 * @h: the head pointer
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int d = 0;

	while (h != NULL)
	{
		d++;
		h = h->next;
	}
	return (d);
}
