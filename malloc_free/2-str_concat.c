#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates tow string
 *
 * @s1: char
 * @s2: char
 * Return: string concatenates.
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned long i;

	if (s1 == NULL && s2 == NULL)
		return (NULL);


	a = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (a == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		a[i] = s1[i];
	for (i = 0; i < strlen(s2); i++)
		a[strlen(s1) + i] = s2[i];

	return (a);

}
