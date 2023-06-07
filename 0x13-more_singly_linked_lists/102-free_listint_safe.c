#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list
 * @h: list to free
 * Return: size of list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp, *b;
	size_t cnt = 0;

	if (h == NULL)
	{
		return (0);
	}
	temp = *h;
	while (temp != NULL)
	{
		b =  b->next;
		free(temp);
		cnt++;
		temp = b;
	}
	*h = NULL;
	return (cnt);
}
