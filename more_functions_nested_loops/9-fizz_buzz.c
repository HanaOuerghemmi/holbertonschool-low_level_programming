#include "main.h"
#include <stdio.h>
/**
 * main - print fizzbuzz
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FIZZBUZZ");
		else if ((i % 3 == 0))
			printf("FIZZ");
		else if ((i % 5 == 0))
			printf("buzz");
		else
			printf("%d ", i);
	}
	putchar('\n');
return (0);
}
