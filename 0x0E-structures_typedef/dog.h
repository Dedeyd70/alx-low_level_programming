#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - structure for a dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
