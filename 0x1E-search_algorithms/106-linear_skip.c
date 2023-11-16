#include "search_algos.h"

/**
 * linear_skip - This searches for a value in a skip list.
 * @list: the input list
 * @value: the value to search in
 * Return: the index of the number
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *jq, *d;

	if (list == NULL)
		return (NULL);

	for (jq = d = list; d->next != NULL && d->n < value;)
	{
		jq = d;
		if (d->express != NULL)
		{
			d = d->express;
			printf("Value checked at index [%ld] = [%d]\n",
				   d->index, d->n);
		}
		else
		{
			while (d->next != NULL)
				d = d->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   jq->index, d->index);

	for (; jq->index < d->index && jq->n < value; jq = jq->next)
		printf("Value checked at index [%ld] = [%d]\n", jq->index, jq->n);
	printf("Value checked at index [%ld] = [%d]\n", jq->index, jq->n);

	return (jq->n == value ? jq : NULL);
}
