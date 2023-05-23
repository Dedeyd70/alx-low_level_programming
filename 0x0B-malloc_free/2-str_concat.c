#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenating two strings
 * @s1: Initial string
 * @s2: second string
 * Return: outcome
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int d, j, m, n;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	d = 0;
	while (s1[d] != '\0')
		d++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	s = malloc((d + j + 1) * sizeof(*s1));
	if (s == 0)
		return (NULL);
	m = 0;
	n = 0;
	while (m < d + j)
	{
		if (m < d)
			s[m] = s1[m];
		else
			s[m] = s2[n++];
		m++;
	}
	s[m] = '\0';
	return (s);

}
