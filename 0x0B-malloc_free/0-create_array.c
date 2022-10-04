#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char and initializes it
 * with a specific char
 * @size: unsigned integer for size of array
 * @c: character to be initialized
 * Return: array of characters
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(char));

	if (arr == NULL || size == 0)
		return ('\0');

	else
	{
		for (i = 0; i < size; i++)
			arr[i] = c;

		return (arr);
	}
}
