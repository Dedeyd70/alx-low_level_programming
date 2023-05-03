#include "main.h"
#include <limits.h>

/**
 * _atoi - Converting a string to an integer
 * @s: string to convert
 * Return: the value of the string
 */
int _atoi(char *s)
{
	int dee = 0;
	int sin = 1;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sin *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			if (dee >= INT_MAX / 10 && (*s - '0') > INT_MAX % 10)
				return (INT_MAX);
			if (dee <= INT_MIN / 10 && (*s - '0') < INT_MIN % 10)
				return (INT_MIN);

			dee = dee * 10 + (*s - '0');
		}
		else if (dee > 0)
		{
			break;
		}
		s++;
	}
	return (dee * sin);
}
