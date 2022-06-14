#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - print a string in reverse
 *
 *@s: variable return the  string.
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i;
	int j;
	char str;

	j = strlen(s);

	for (i = 0, j -= 1 ; i < j; i++, j--)
	{
		str = s[i];
		s[i] = s[j];
		s[j] = s[i];
	}

}


