#include "main.h"

/**
 * _strlen_recursion - function that return the lenght of string
 *
 * @s: pointeur string
 * Return: Void.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);

}

