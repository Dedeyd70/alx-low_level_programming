#include "main.h"

/**
 * _strlen - A funtion that returns the length of a string
 * @s: the string to be used
 * Return: is the lenth of the string
 */
int _strlen(char *s)
{
	int dee = 0;

	while (*s != '\0')
	{
		dee++;
		s++;
	}
	return (dee);
}
