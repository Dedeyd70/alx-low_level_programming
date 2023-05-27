#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * multiply_numbers -  multiplication of two numbers
 * @num1: the first number
 * @num2: the secomd number
 */
void multiply_numbers(char *num1, char *num2)
{
	size_t d;
	int dee, jay, res;

	for (d = 0; d < strlen(num1); d++)
	{
		if (!isdigit(num1[d]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (d = 0; d < strlen(num2); d++)
	{
		if (!isdigit(num2[d]))
		{
			printf("Error\n");
			exit(98);
		}
	}

	dee = atoi(num1);
	jay = atoi(num2);

	res = dee * jay;

	printf("%d\n", res);
}

/**
 * main - multiplying 2 positive numbers
 * @argc: number of argument
 * @argv: array of argument
 * Return: alwys 0(Success)
 */
int main(int argc, char *argv[])
{
	char *num1;
	char *num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	multiply_numbers(num1, num2);

	return (0);
}
