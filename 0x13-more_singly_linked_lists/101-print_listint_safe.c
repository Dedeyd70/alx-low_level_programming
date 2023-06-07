#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

const listint_t *detect_loop(const listint_t *head);

/**
 * detect_loop - detects if a loop exits in a linked list
 * @head: A pointer to the head of the linked list.
 * Return: The node where the loop starts, or NULL if the loop is found
 */
const listint_t *detect_loop(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (slow);
	}
	return (NULL);
}


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
