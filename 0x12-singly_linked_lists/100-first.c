#include <stdio.h>

void printMsg(void)__attribute__((constructor));

/**
 * printMsg - printing a function before the main
 *
 * Return: nothing
 */
void printMsg(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
