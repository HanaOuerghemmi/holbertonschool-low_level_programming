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
	void *r;
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	r = malloc(size * nmemb);
	if (r == NULL)
		return (NULL);
	arr = r;
	for (i = 0; i < (size * nmemb); i++)
			arr[i] = '0';
	return (r);
}
