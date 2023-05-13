#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplication of two numbers
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0 or 1 for Error
 */
int main(int argc, char *argv[])
{
	int d = 0;
	int j = 0;

	if (argc == 3)
	{
		d = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", j * d);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
