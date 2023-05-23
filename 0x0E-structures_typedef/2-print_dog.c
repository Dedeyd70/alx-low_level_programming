#include "dog.h"

/**
 * print_dog - Printing a struct dog
 * @d:the argument to be used
 */
void print_dog(struct dog *d)
{
	if (!d)
	{
		return;
	}
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
