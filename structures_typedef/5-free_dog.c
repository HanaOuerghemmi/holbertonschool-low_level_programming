#include "dog.h"
#include<stdlib.h>
/**
 * free_dog - function that free dog
 *
 * @d: dog
 * Return: Void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
		free(d->name);
		free(d->owner);
	}
}
