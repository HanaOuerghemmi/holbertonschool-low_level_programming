#include "main.h"

/**
 * factorial - function that factorial of given number
 *
 * @n: number
 * Return: fact de n .
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));

}

