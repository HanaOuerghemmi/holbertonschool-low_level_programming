#include "main.h"
/**
 * print_last_digit - print the last digit.
 *
 * @n: number to be cheked
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (a < 0)
	a  *= -1;

	_putchar(a + '0');
	return (a);
}

