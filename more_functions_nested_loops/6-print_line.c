#include "main.h"
/**
 * print_line - print 10 times the numbers, from 0 to 14.
 *
 * @n: number of time
 * Return: void.
 */
void print_line(int n)
{
	int i;

		if (n > 0)
		{
			for (i = 0; i < n; i++)
			{
				_putchar('_');
			}
			_putchar('\n');
		}
		else
			_putchar('\n');
}



