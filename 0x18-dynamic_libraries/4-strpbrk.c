# include "main.h"

/**
 * *_strpbrk - Searching a string
 * @s: string to be used
 * @accept: the string to be used
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return ('\0');
}
