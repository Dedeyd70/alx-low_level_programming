#include "dog.h"

/**
 * init_dog - initialization of struct dog
 * struct dog: new type
 * @d: the variable
 * @name: dog name
 * @owner: owner
 * @age:age of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
