#include "main.h"
#include <stdio.h>
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
	int i = 0;
	char *c;

	while (str[i])
		i++;
	c = malloc(sizeof(*c) * (i + 1));
	while (*str)
		*c++ = *str++;
	*c = '\0';
	return (c);

}

