#include "lists.h"

/**
 * insert_nodeint_at_index - insets a new node at a given position
 * @head: pointer to haed of the list
 * @idx: the index of the list
 * @n: value to assign to the new code
 * Return: Address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *nw_node;
	unsigned int cnt;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
		return (add_nodeint(head, n));
	new = *head;
	for (cnt = 0; new != NULL && cnt < idx - 1; cnt++)
	{
		new = new->next;
	}
	if (new == NULL)
		return (NULL);
	nw_node = malloc(sizeof(listint_t));
	if (nw_node == NULL)
		return (NULL);
	nw_node->n = n;
	nw_node->next = new->next;
	new->next  = nw_node;
	return (new->next);
}

/**
 * add_nodeint - Adds a new node
 * @n: value to new node
 * @head: pointer to the head of the list
 * Return: A pointer to a node
 */
listint_t *add_nodeint(listint_t **head, int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
