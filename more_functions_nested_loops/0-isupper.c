#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 *
 * @c: is the varible to check it
 * Return: 1 if uppecaser else 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
