#include "search_algos.h"

/**
  * _binary_search - Searches for a value in a sorted array
  * of integers using binary search.
  * @array: A pointer to the first element of the array
  * @left: The starting index of the [sub]array to search.
  * @right: The ending index of the [sub]array to search.
  * @value: The value to search for
  * Return: -1 If the value is not present or the array is NULL,
  * Otherwise, the index where the value is located.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t d;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (d = left; d < right; d++)
			printf("%d, ", array[d]);
		printf("%d\n", array[d]);

		d = left + (right - left) / 2;
		if (array[d] == value)
			return (d);
		if (array[d] > value)
			right = d - 1;
		else
			left = d + 1;
	}

	return (-1);
}

/**
  * exponential_search - using exponential search to search for
  * a value in a soted array of integers.
  * @array: A pointer to the first element
  * @size: The number of elements in the array.
  * @value: The value to search for.
  * Return: -1 if the value is not present or the array is NULL,
  * Otherwise, the index where the value is located
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t d = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (d = 1; d < size && array[d] <= value; d = d * 2)
			printf("Value checked array[%ld] = [%d]\n", d, array[d]);
	}

	right = d < size ? d : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", d / 2, right);
	return (_binary_search(array, d / 2, right, value));
}
