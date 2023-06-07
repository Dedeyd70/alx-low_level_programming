#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: A pointer to the head of the linked list
 * Return: the number of noded in the list
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
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			exit(98);
		}
	}
	return (cnt);
}
