#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Performing a simple operation
 * @argc: the argument count
 * @argv: the argument vector
 * Return: always 0(success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (!op_func)
	{
		printf("Error\n");
		return (99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	res = op_func(num1, num2);
	printf("%d\n", res);
	return (0);
}
