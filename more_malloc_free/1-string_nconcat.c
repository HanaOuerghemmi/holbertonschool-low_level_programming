#include "main.h"
#include <stdio.h>
#include<string.h>
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
	unsigned int i, len = n;

	/*if NULL is passed, treat it as an empty string*/

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* count the size to allocate */
	for (i = 0; s1[i]; i++)
		len++;
	/* aloocate memory*/

	a = malloc(sizeof(char) * len + 1);

	/* If the function fails, it should return NULL*/
	if (a == NULL)
		return (NULL);

	/*concat */
	len = 0;
	for (i = 0; s1[i]; i++)
		a[len++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		a[len++] = s2[i];
	a[len] = '\0';

	return (a);

}
