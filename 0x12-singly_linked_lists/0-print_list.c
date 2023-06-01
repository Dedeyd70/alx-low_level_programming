#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - printing all the elements
 * @h: the head pointer
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t sum = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nill)\n");
		}
		h = h->next;
		sum++;
	}
	return (sum);
}
