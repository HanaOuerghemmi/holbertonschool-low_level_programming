#include "main.h"
/**
 * print_square - print 10 times the numbers, from 0 to 14.
 *
 * @size: size square
 * Return: void.
 */
void print_square(int size)
{
	int i, j;

		if (size > 0)
		{
			for (j = 0; j < size; j++)
			{
				for (i = 0; i < size; i++)
				{
					_putchar('#');
				}
				_putchar('\n');
			}
		}

		else
			_putchar('\n');
}

