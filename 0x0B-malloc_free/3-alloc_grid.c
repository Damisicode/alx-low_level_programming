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

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	ptr = malloc(height * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(**ptr));
		if (ptr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}

	return (ptr);
}
