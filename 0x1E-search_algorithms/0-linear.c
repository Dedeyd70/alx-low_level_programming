#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: input array
 * @size: size of the array
 * @value: the value
 * Return: 1 If value is not present in array or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	int d;

	if (array == NULL)
		return (-1);
	for (d = 0; d < (int)size; d++)
	{
		printf("Value checked array[%u] = [%d]\n", d, array[d]);
		if (value == array[d])
			return (d);
	}
	return (-1);
}
