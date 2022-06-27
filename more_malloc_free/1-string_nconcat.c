#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates tow string
 * @s1: string1
 * @s2: string2
 * @n: size
 *
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;


	str = malloc(n + 1);
	if (str == NULL)
		return (NULL);

	str = s1 + strlen(s1);
	while (*s2 != '\0' && n--)
		*str++ = *s2++;
	*str = '\0';
	return (s1);

}
