#include "main.h"
#include <string.h>
/**
 * puts_half - prints half string
 * @str : the string
 * Return: void
 */
void puts_half(char *str)
{
	int j, n, i;

	j = strlen(str);

	if ((j % 2) == 0)
		n = j / 2;
	else
		n = (j - 1) / 2;

	for (i = 0 ; i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
