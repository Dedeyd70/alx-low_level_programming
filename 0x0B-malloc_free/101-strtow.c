#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid_copy - Freeing two dimentional grid
 * @grid: The grid
 * @height: The grid's height
 */
void free_grid_copy(char **grid, int height)
{
	int d = 0;

	for (; d < height; d++)
	{
		free(*(grid + d));
	}
	free(grid);
}

/**
 * strtow - Spliting Strings into words
 * @str: the string
 * Return: Array of words
 */
char **strtow(char *str)
{
	char **dee;
	unsigned int a, b, c, d, e;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (a = b = 0; str[a] != '\0'; a++)
		if (str[a] != 32 && (str[a + 1] == 32 || str[a + 1] == '\0'))
			b++;

	dee = malloc((b + 1) * sizeof(char *));
	if (dee == NULL || b == 0)
	{
		free(dee);
		return (NULL);
	}
	for (c = e = 0; c < b; c++)
	{
		for (a = e; str[a] != '\0'; a++)
		{
			if (str[a] == 32)
				e++;
			if (str[a] != 32 && (str[a + 1] == 32 || str[a + 1] == '\0'))
			{
				*(dee + c) = malloc((a - e + 2) * sizeof(char));
					if (*(dee + c) == NULL)
					{
						free_grid_copy(dee, c);
						return (NULL);
					}
					break;
			}
		}
		for (d = 0; e <= a; d++, e++)
			dee[c][d] = str[e];
		dee[c][d] = '\0';
	}
	*(dee + c) = NULL;
	return (dee);
}
