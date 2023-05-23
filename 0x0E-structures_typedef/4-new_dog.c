#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - A function that creates new dogs
 * @age: age of dog
 * @owner: owner of dog
 * @name: name of dog
 * Return:*woof
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name1, own1;
	dog_t *dog;

	if (name != NULL && owner != NULL)
	{
		name1 = _strlen(name) + 1;
		own1 = _strlen(owner) + 1;
		dog = malloc(sizeof(dog_t));

		if (dog == NULL)
			return (NULL);
		dog->name = malloc(sizeof(char) * name1);

		if (dog == NULL)
		{
			free(dog);
			return (NULL);
		}
		dog->owner = malloc(sizeof(char) * own1);

		if (dog->owner == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}
		dog->name = _strcpy(dog->name, name);
		dog->owner = _strcpy(dog->owner, owner);
		dog->age = age;
	}
	else
	{
		dog = NULL;
	}
	return (dog);
}

/**
 * _strlen - Returning the length of a string
 * @s: string to be used
 * Return: string length
 */
int _strlen(char *s)
{
	int d = 0;

	while (*s != '\0')
	{
		d++;
		s++;
	}
	return (d);
}


/**
 * _strcpy - copying a string
 * @dest: destination value
 * @src: source value
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;

	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
