#include "search_algos.h"
#include <math.h>

/**
 * binary_search - This function searches for a value in a sorted
 * 	           array of integers using binary search
 * @array: Sorted array of integers
 * @size: size_t type length of the array
 * @value: integer type value to search for
 * 
 * Return: index of the found value position and -1 if value is not
 *         found or array is NULL
 */

int binary_search(int *array, size_t size, int value) {
	size_t last, mid, first, i;

	if (array == NULL) {
		return -1;
	}
	last = size;
	first = 0;
	while (last > (first+1)) {
		printf("Searching in array: ");
		for (i = first; i < last; i++) {
			printf("%ld", i);
			if (i != last - 1) {
				printf(", ");
			}
		}
		printf("\n");
		mid = floor((last + first) / 2);
		if (array[mid] > value) {
			last = mid - 1;
		}
		else if (array[mid] < value) {
			first = mid + 1;
		}
		if (array[mid] == value) {
			return mid;
		}
	}
	return -1;
}
