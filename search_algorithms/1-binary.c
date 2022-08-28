#include "search_algos.h"
/**
 * binary_search - function that searches for a value in sorted array
 * @array: array
 * @size: size of array
 * @value: value to seaarch it
 * Return: index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, low = 0, hight = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (low <= hight)
	{
		mid = (hight + low) / 2;
		i = low;
		printf("Searching in array: ");

		while (i <= hight)
		{
			if (i != low)
				printf(" ,%d", array[i]);
			else
				printf("%d ", array[i]);
			i++;
		}
		printf("\n");
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			hight = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
