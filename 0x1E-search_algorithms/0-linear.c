#include "search_algos.h"

/**
 *  linear_search - This functions searches for a value in an arrays
 *  of integers using the Linear search algorithm
 *  @array: array of integers
 *  @size: integer size of an array
 *  @value: integer to search for in the array
 *  Return: index location of the value
 */

int linear_search(int *array, size_t size, int value) {
	size_t i = 0;

	if (array == NULL)
		return -1;

	for (i = 0; i < size; i++) {
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value) {
			return i;
		}
	}

	return -1;
}
