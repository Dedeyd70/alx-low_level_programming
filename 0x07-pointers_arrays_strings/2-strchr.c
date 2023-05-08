#include "main.h"

/**
 * *_strchr - Locating charater of a string
 * @s: the string
 * @c: char to be used
 * Return: pointer to c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return ('\0');
}
