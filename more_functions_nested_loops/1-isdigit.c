#include "main.h"

/**
 * _isdigit - checks for  digit (0 through 9).
 *
 * @c: is the varible to check it
 * Return: 1 if digit else 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

