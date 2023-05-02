#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that generates random valid passwords
 * Return: always 0(Success)
 */
int main(void)
{
	srand(time(NULL));

	int password[7];
	int d, sum = 0;

	for (d = 0; d < 6; d++)
	{
		password[d] = rand() % 10 + '0';
		sum += password[d];
	}

	password[6] = (sum % 10) + '0';

	for (d = 0; d < 7; d++)
	{
		putchar(password[d]);
	}

	return (0);
}
