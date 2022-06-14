#include "main.h"
#include <stdio.h>

/**
 * puts2 - print a string in reverse
 *
 *@str: variable return the  string.
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] % 2) == 0)
			_putchar(*str + i);
		i++;
	}
	_putchar('\n');
}

