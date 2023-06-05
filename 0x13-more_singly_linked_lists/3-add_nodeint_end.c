#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of the list
 * @head: pointer to a pointer to the head of the list
 * @n: value to assigned to the new code
 * Return: the address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw_node = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (nw_node == NULL)
		return (NULL);
	nw_node->n = n;
	nw_node->next = NULL;

	if (*head == NULL)
	{
		*head = nw_node;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = nw_node;
	}
	return (nw_node);
}
