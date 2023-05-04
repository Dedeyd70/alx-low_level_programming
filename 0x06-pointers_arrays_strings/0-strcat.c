#include "main.h"

/**
 * *_strcat - function that concatenates two strings.
 * @dest: string to be used
 * @src: srting to be used
 * Return: return pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (ptr);
}
