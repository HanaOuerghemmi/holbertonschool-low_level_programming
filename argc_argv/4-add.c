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
	int i, j, s;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		s += atoi(argv[i]);
	}
	printf("%d\n", s);

	return (0);
}

