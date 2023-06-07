#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: apointer to the head of the linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t cnt = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		cnt++;
		if (head > head->next)
		{
			head = head->next;
		}
		else
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (cnt);
}
