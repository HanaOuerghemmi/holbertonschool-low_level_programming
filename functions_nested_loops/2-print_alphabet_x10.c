#include "main.h"
/**
 * main -print alphabet 10 time
 *
 * Return void
 */

void print_alphabet_x10(void)
{
	char a;
	int i = 0;

	while (i <= 9)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
	}
		_putchar('\n');
		i++;
	}


}

