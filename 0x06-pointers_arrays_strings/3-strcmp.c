#include "main.h"

/**
 * _strcmp - Comparing two strings
 * @s1: first string to be used
 * @s2: second string to be used
 * Return: difference
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
