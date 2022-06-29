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
	unsigned int i, size;
	unsigned int ls1, ls2;

	ls1 = strlen(s1);
	ls2 = strlen(s2);

	/*If n is greater or equal to the length of s2*/
	 /*then use the entire string s2 */

	if (n >= ls2)
		size = ls1 + ls2;
	else
		size = ls1 + n;

	/* aloocate memory*/

	a = malloc(sizeof(char) * size);

	/* If the function fails, it should return NULL*/
	if (a == NULL)
		return (NULL);

	/*if NULL is passed, treat it as an empty string*/

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*concat */

	for (i = 0; i < ls1; i++)
		a[i] = s1[i];
	for (i = 0; i < n; i++)
		a[i + ls1] = s2[i];

	return (a);

}
