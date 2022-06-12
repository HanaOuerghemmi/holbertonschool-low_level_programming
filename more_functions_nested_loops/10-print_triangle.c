#include "main.h"
/**
 * print_triangle - print 10 times the numbers, from 0 to 14.
 *
 * @size: size triangle
 * Return: void.
 */
void print_triangle(int size)
{
	int i, j, k;

		if (size > 0)
		{
			for (i = 1; i <= size ; i++)
			{
				for (j = size; j >= i; j--)
					_putchar(' ');

				for (k = 1 ; k < j; k++)
				_putchar('#');
				_putchar('\n');
			}
		}

		else
			_putchar('\n');
}

