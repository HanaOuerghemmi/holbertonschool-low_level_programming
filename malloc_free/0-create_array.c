#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of char
 * and initializies it with a specific char
 * @c: char
 * @size: the size
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);

	}
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);

}
