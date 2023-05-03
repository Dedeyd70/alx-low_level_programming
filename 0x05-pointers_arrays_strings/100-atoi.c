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
	int dig;
	int overf = 0;
	while (*s != '\0')
	{
		if (*s == '-')
		{
			sin *= -1;
		}
		if (*s >= '0' && *s <= '9')
		{
			dig = *s - '0';
			if (dee > INT_MAX / 10 || ((dee == INT_MAX / 10))
				overf = 1;

			dee = dee * 10 + dig;
		}
		else if (dee > 0)
		{
			break;
		}
		s++;
	}
	return (dee * sin);
}
