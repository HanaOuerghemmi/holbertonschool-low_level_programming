#include "search_algos.h"
/**
 * linear_search - function that searchs for a value in array of
 * integers using linear search algorthme
 * @array: the array
 * @size: size of array
 * @value: the value to search it
 * Return: the index of the value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);

}