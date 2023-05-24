#include "function_pointers.h"

/**
 * int_index - searching an integer
 * @array: The array
 * @size: The size of array
 * @cmp: A pointer to the function
 * Return: -1 if no match, otherwise the index of the found integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int d;

	if (cmp != 0 && array != 0 && size > 0)
	{
		for (d = 0; d < size; d++)
		{
			if (cmp(array[d]) != 0)
			{
				return (d);
			}
		}
	}

	return (-1);
}
