#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenating all arguments
 * @ac: num of arguments
 * @av: array of argument strings
 * Return: Pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int d, j, len = 0, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	d = 0;
	while (d < ac)
	{
		j = 0;
		while (av[d][j])
		{
			len++;
			j++;
		}
		len++;
		d++;
	}
	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);
	d = 0;
	k = 0;
	while (d < ac)
	{
		j = 0;
		while (av[d][j])
		{
			str[k++] = av[d][j];
			j++;
		}
		str[k++] = '\n';
		d++;
	}
	str[k] = '\0';
	return (str);
}
