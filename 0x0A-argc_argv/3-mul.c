#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplication of two numbers
 * @argc: The argument count
 * @argv: The argument vector
 * Return: always 0(success)
 */
int main(int argc, char *argv[])
{
	int d, jay, r;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	
	d = atoi(argv[1]);
	jay = atoi(argv[2]);
	r = d * jay;

	printf("%d\n", r);
	return (0);
}
