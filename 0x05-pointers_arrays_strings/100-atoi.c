#include "main.h"

/**
 * _atoi - Converting a string to an integer
 * @s: string to convert
 * Return: the value of the string
 */
int _atoi(char *s)
{
	unsigned int dee = 0;

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			dee = dee * 10 + (*s - '0');
		}
		else if (dee > 0)
		{
			break;
		}
		s++;
	}
	return (dee);
}
