#include "main.h"

/**
 * _print_rev_recursion - function that print a string
 *
 * @s: pointeur string
 * Return: Void.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}

