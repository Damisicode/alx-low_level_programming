#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: integer width of grid
 * @height: integer height of grid
 * Return: grid
 */

int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	ptr = (int **)malloc(sizeof(int) * height);

	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < height)
	{
		ptr[i] = (int *)malloc(sizeof(int) * width);
		if (ptr == NULL)
			return (NULL);
		j = 0;
		while (j < width)
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}

	return (ptr);
}
