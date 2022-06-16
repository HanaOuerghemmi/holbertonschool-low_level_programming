#include "main.h"
#include <stdio.h>
/**
 * _strstr - function that locates substring
 *
 * @haystack: substring
 * @needle: substring
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
	haystack++;
	}
	return (NULL);
}
