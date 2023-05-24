#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returning the sum of a and b
 * @a: the first number
 * @b: The second number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracting
 * @a: the first number
 * @b: the second number
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplying a and b
 * @a: the first number
 * @b: the second number
 * Return: The result of multiplying a and b
 */
nt op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - dividing a and b
 * @a: the first number
 * @b: the second number
 * Return:the result of the division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Remainder of dividing of a and b
 * @a: the first number
 * @b: the second number
 * Return: remainder of the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
