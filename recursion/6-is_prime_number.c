#include "main.h"
int _prime(int n, int i);
/**
 * _prime - function that check if  the number prime
 *
 * @n: number
 * @i: number
 * Return: 1 if prime 0 if not
 */

int _prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (_prime(n, i + 1));
}


/**
 * is_prime_number - function that returns 1 if the input is a prime number else 0
 *
 * @n: number
 * Return: 1 if prime 0 if not .
 */
int is_prime_number(int n)
{
	return  (_prime(n, 1));
}


