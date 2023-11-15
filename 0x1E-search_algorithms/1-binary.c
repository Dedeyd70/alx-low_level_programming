#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array
  *                 of integers using binary search.
  * @array: A pointer to the first element.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  * Return: -1 If value is not present in array or if
  * array is NULL, your function must return
  */
int binary_search(int *array, size_t size, int value)
{
	size_t d, lt, rt;

	if (array == NULL)
		return (-1);
	for (lt = 0, rt = size - 1; rt >= lt;)
	{
		printf("Searching in array: ");
		for (d = lt; d < rt; d++)
			printf("%d, ", array[d]);
		printf("%d\n", array[d]);
		d = lt + (rt - lt) / 2;
		if (array[d] == value)
			return (d);
		if (array[d] > value)
			rt = d - 1;
		else
			lt = d + 1;
	}
	return (-1);
}
