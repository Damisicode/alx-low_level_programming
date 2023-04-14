#include "search_algos.h"
#include <math.h>

/**
 *
 */

int interpol(int *array, size_t low, size_t high, int value) {
	size_t pos;

	pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
	return pos;
}

/**
 *
 */

int interpolation_search(int *array, size_t size, int value) {
	size_t low = 0;
	size_t high = size - 1;
	size_t i;
	size_t result;

	if (array == NULL) {
		return -1;
	}

	result = interpol(array, low, high, value);
	for (i = 0; i < size; i++) {
		if (result < size) {
			printf("Value checked array[%ld] = [%d]\n", result, array[result]);
		}
		else {
			printf("Value checked array[%ld] is out of range\n", result);
			return -1;
		}

		if (array[result] > value) {
			high = result;

		}
		else if (array[result] < value) {
			low = result;
		}
		else {
			return result;
		}
		result = interpol(array, low, high, value);	
	}
	return -1;	
}
