#include "search_algos.h"
#include <math.h>

/**
 * jump_list - using the Jump search algorithm to search
 * for a value in an array of integers.
 * @list: is a pointer to the head of the list
 * @size: the number of nodes in list
 * @value: value to search for
 * Return: If value is not present in head or if head is NULL, your
 * function must return NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, d;
	listint_t *jq, *r;

	if (list == NULL || size == 0)
		return (NULL);

	i = 0;
	d = sqrt(size);
	for (jq = r = list; r->index + 1 < size && r->n < value;)
	{
		jq = r;
		for (i = i + d; r->index < i; r = r->next)
		{
			if (r->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", r->index, r->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   jq->index, r->index);

	for (; jq->index < r->index && jq->n < value; jq = jq->next)
		printf("Value checked at index [%ld] = [%d]\n", jq->index, jq->n);
	printf("Value checked at index [%ld] = [%d]\n", jq->index, jq->n);

	return (jq->n == value ? jq : NULL);
}
