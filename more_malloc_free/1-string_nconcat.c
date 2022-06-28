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


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	a = malloc(sizeof(char) * (strlen(s1) + n + 1));

	if (a == NULL)
		return (NULL);
	n = 0;
	for (i = 0; s1[i]; i++)
		a[n++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		a[n++] = s2[i];
	a[n] = '\0';
	return (a);

}
