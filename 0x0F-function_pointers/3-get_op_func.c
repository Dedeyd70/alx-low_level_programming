#include "3-calc.h"
#include <string.h>
#include <stdio.h>

/**
 * get_op_func - selection of correct function
 * @s: the argument to be used
 * Return: NULL if s does not match any of the 5 operators
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if ((*ops[i].op == *s) && (*(s + 1) == '\0'))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
