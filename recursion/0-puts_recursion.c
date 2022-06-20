#include "main.h"

/**
 * _puts_recursion - function that print a string
 *
 * @s: pointeur string
 * Return: Void.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
