#include "main.h"

/**
 * _abs - write a function that computes the absolute value of an interger
 * @j: the argument used
 * Return: absolute value if int
 */
int _abs(int j)
{
	if (j >= 0)
		return (j);

	else
	{
		j *= -1;
		return (j);
	}
}
