#include "main.h"
/**
 * times_table - function that print 9 time table
 */
void times_table(void)
{
	int n, multi, r;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');

			r = n * multi;

			if (r <= 9)
				_putchar(' ');
			else
				_putchar((r / 10));
			_putchar((r % 10) + '0');
		}
		_putchar('\n');
	}
}
