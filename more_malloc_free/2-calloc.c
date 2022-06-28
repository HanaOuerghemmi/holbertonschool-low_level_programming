#include "main.h"
#include <stdlib.h>
/**
 *_calloc -function that allocate memory for an array
 *
 * @nmemb: nmemb
 * @size: size
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(size * nmemb);
		for (i = 0; i < (size * nmemb); i++)
			arr[i] = '0';
	return (arr);
}
