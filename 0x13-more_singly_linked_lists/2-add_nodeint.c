#include "lists.h"

/**
 * add_nodeint - adding a new node to the beginning of a list
 * @head: pointer to head pointer
 * @n: the number
 * Return: the address of the new element of NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw_node;

	if (head == NULL)
		return (NULL);
	nw_node = malloc(sizeof(listint_t));
	if (nw_node == NULL)
		return (NULL);
	if (*head == NULL)
		nw_node->next = NULL;
	else
		nw_node->next = *head;
	nw_node->n = n;
	*head = nw_node;

	return (*head);
}
