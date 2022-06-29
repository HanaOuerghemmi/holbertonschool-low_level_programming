#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function that initialize a variable of type struct
 *
 * @d: dog
 * @name: dog name
 * @age: age name
 * @owner: owner of the dog
 * Return: Void
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
