#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that create an array of integer
 *
 * @min: min
 * @max: max
 * Return: array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;
	return (arr);
}
