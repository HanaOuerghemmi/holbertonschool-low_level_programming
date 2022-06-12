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
			for (j = 1; j <= size; j++)
			{
				for (i = 1; i <= size - 1; i++)
				{
					_putchar(' ');
				}
				for (k = 1 ; k <= i; k++)
				{
					_putchar('#');
				}
				_putchar('\n');
			}
		}

		else
			_putchar('\n');
}

