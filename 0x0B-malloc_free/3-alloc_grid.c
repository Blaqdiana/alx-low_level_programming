#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2d array of integers.
 *
 * @width: The width of the 2d array.
 * @height: The height of the 2d array.
 *
 * Return: Pointer to 2d array.
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = (int **) malloc(height * sizeof(int *));
	if (!array)
		return (NULL);
	while (i < height)
	{
		*(array + i) = (int *) malloc(width * sizeof(int));
		if (*(array + i) == NULL)
		{
			while (j < height)
			{
				free(*(array + j));
				j++;
			}
			free(array);
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		while (j < width)
		{
			*(*(array + i) + j) = 0;
			j++;
		}
		j = 0;
		i++;
	}
	return (array);
}
