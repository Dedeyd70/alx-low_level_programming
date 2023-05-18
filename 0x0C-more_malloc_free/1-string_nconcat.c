#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - Concatenating two strimgs
 * @s1: string 1
 * @s2: string 2
 * @n: the bytes
 * Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = n, dex;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (dex = 0; s1[dex]; dex++)
		len++;
	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);
	len = 0;
	for (dex = 0; s1[dex]; dex++)
		concat[len++] = s1[dex];
	for (dex = 0; s2[dex] && dex < n; dex++)
		concat[len++] = s2[dex];
	concat[len] = '\0';

	return (concat);
}
