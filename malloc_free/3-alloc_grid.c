#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * alloc_grid - function that return a pointer to 2
 * dimensional arrray of integer
 *
 * @width:  width
 * @height: heigh
 * Return: array 2d
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (height <= 0 || width <= 0)
		return (NULL);

	a = (int **) malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = (int *)malloc(sizeof(int) * width);
			if (a[i] == NULL)
			{
				while (i >= 0)
				{
					i--;
					free(a[i]);
				}
				free(a);
				return (NULL);
			}
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
			if (a[j] == NULL)
				free(a[j]);
		}
	}

	return (a);

}

