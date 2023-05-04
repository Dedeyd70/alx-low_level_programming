#include "main.h"

/**
 * char *string_toupper - Changing all lowercase letters
 * @str: string to be used
 * Return: uppercase
 */
char *string_toupper(char *str)
{
	char *d = str;

	while (*d != '\0')
	{
		if (*d >= 'a' && *d <= 'z')
		{
			*d = *d - ('a' - 'A');
		}
		d++;
	}
	return (str);
}
