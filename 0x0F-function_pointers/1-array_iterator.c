#include "function_pointers.h"

/**
 * array_iterator - Iterates array
 * @size: size of the array
 * @action: pointer to function
 * @array: the array
 * Return: empty
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int d;

	if (array != 0 && action != 0 && size != 0)
	{
		for (d = 0; d < size; d++)
		{
			action(array[d]);
		}
	}
}
