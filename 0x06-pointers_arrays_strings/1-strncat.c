#include "main.h"
#include <string.h>

/**
 * *_strncat - concatenates two strings
 * @dest: string to be used
 * @src: string to be used
 * @n: argument to used
 * Return: a pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *d = dest + strlen(dest);

	while (n-- > 0 && *src != '\0')
	{
		*d++ = *src++;
	}
	*d = '\0';

	return (dest);
}
