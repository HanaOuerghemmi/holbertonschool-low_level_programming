#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - header file print alphabet
 *
 * Return: Void
 */
void print_alphabet(void)
{

	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

