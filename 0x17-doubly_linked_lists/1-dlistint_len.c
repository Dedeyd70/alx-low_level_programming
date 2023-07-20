#include "lists.h"

/**
 * dlistint_len - printing the number of elements in a linked list
 * @h: the pointer
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int number = 0;

	for (; h; h = h->next)
		number++;
	return (number);
}
