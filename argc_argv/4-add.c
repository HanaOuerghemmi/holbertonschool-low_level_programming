#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main- program that print its name followed by new line
 *
 * @argc: argc
 * @argv: argv
 * Return: void
 */
int main(int argc, char **argv)
{
	unsigned int j, s;
	int i;
	char *a;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			a = argv[i];
			for (j = 0; j < strlen(a); j++)
				if (a[j] < 48 && a[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			s += atoi(a);
			a++;
		}
		printf("%d\n", s);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

