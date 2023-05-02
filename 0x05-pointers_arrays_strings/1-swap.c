#include "main.h"

/**
 * swap_int - swapping values of two integers
 * @a: first value to be swapped
 * @b: second value to be swapped
 * Return: always 0(Success)
 */
void swap_int(int *a, int *b)
{
	int dee = *a;
	*a = *b;
	*b = dee;
}
