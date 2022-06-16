#include "main.h"
#include <stdio.h>
/**
 * reverse_array - print a string in reverse
 *
 *@a: array
 *@n: size
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int *aux;
	int i;

	for (i = 0; i < n; i++)
	{
		aux[(n - 1) - i] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = aux[i];
	}
}
