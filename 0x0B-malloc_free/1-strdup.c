#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - A function that returns a pointer to a new space in memory
 * @str: the string
 * Return: null if str is null
 */
char *_strdup(char *str)
{
	int len = 0;
	char *dup;
	int d;

	if (str == NULL)
		return (NULL);

	while (str[len])
	{
		len++;
	}

	dup = (char *) malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (d = 0; d < len; d++)
	{
		dup[d] = str[d];
	}
	dup[len] = '\0';
	return (dup);
}
