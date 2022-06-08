#include "main.h"
/**
 * * main - islower
 *
 * Return : Always 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
