#include "main.h"

/**
 * *_strcpy - copying the string pointed to by src
 * @dest: the char to be used
 * @src: the char to be used
 * Return: is the value of the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int d = 0;

	while (src[d] != '\0')
	{
		dest[d] = src[d];
		d++;
	}
	dest[d] = '\0';
	return (dest);
}
