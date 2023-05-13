#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adiitions of positive numbers
 * @argc: The argument count
 * @argv: The argument vector
 * Return: always 0(success)
 */
int main(int argc, char *argv[])
{
	int d, j;
	int result = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (d = 1; d < argc; d++)
	{
		for (j = 0; argv[d][j] != '\0'; j++)
		{
			if (argv[d][j] < '0' || argv[d][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[d]);
	}
	printf("%d\n", result);
	return (0);
}
