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
	if (d == NULL)
		return;


	free(d->owner);
	free(d->name);
	free(d);
}
