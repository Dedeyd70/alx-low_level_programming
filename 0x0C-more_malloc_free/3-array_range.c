#include "main.h"
#include <stdlib.h>

/**
 * array_range - Array of integers
 * @min: mininum value
 * @max: maximum value
 * Return:pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int d;
	int *j;

	if (min > max)
		return (NULL);

	j = malloc(sizeof(int) * (max - min + 1));

	if (j == NULL)
		return (NULL);
	d = 0;
	while (min <= max)
	{
		j[d] = min;
		min++;
		d++;
	}
	return (j);
}
