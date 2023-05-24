#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes
 * @argc: the argument count
 * @argv: the argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int d = 0;
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	unsigned char *p = (unsigned char *)&main;

	for (; d < num; d++)
	{
		printf("%.2x", p[d]);
		if (d < num - 1)
		printf(" ");
	}
	printf("\n");
	return (0);
}
