#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/**
 * new_dog - function that creat a new dog
 * @name: dog name
 * @age: age dog
 * @owner: owner of the dog
 * Return: pointeur dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;


	if ((name == NULL) || (age < 0) || (owner == NULL))
		return (NULL);

	d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}
	d->name = malloc(strlen(name) + 1);

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(strlen(owner) + 1);
		if (d->owner == NULL)
		{

			free(d->owner);
			free(d);
			return (NULL);
		}
	d->name = strcpy(d->name, name);
	d->age = age;
	d->owner = strcpy(d->owner, owner);

	free(d);
	return (d);



}


