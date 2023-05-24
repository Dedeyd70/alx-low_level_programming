#include "function_pointers.h"

/**
 * print_name - Printing a name
 * @name: Name of variable
 * @f: pointer to function
 * Return:empty
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
