#include "main.h"
#include <stdio.h>

/**
 * rev_string - print a string in reverse
 *
 *@s: variable return the  string.
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
		_putchar(s[i]);
	}
	for (i -= 1 ; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}


