#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to newly allocated
 * space in memory whitch contain a copy of the string given the parameter
 * @str: char
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{

	char *c, *a;
	int size = strlen(str);

	if (str == NULL)
		return (NULL);
	c = malloc(size + 1);
	a = c;
	while (*str)
		*a++ = *str++;
	*a = '\0';
	return (c);

}

