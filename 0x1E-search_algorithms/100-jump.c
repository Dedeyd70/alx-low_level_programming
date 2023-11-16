#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Using the jump search algorithm to search
 * for the value in a sorted array of integers.
 * @array: a pointer
 * @size: size of the array
 * @value: value to search
 * Return: -1 if value is not present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	int idx, d, j, prev;

	if (array == NULL || size == 0)
		return (-1);

	d = (int)sqrt((double)size);
	j = 0;
	prev = idx = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);
		j++;
		prev = idx;
		idx = j * d;
	} while (idx < (int)size && array[idx] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, idx);

	for (; prev <= idx && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
