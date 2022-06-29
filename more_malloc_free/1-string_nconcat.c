#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates tow string
 *
 * @s1: string 1
 * @s2: string 2
 * @n: size concate
 * Return: string concatenates.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned long i;
	int size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= (strlen(s2)))
		size = strlen(s1) + strlen(s2);
	else
		size = strlen(s1) + n;

	a = malloc(size + 1);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < (strlen(s1)); i++)
		a[i] = s1[i];
	for (i = 0; i < n; i++)
		a[i + strlen(s1)] = s2[i];

	return (a);

}
