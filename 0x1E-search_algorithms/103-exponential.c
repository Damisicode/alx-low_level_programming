#include "search_algos.h"

/**
 * 
 */

int exponential_search(int *array, size_t size, int value) {
	size_t bound = 1;
	int start;

	if (size == 0 || array == NULL) {
		return -1;
	}

	while (bound < size && array[bound] < value) {
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	if (bound > size) {
		printf("Value found between indexes [%ld] and [%ld]\n", bound/2, size-1);
		return binary_search(&(*(array+2)), size-(bound/2), value);
	}

	else {
		printf("Value found between indexes [%ld] and [%ld]\n", bound/2, bound);
		start = array[bound/2];
		return binary_search(&start, bound-(bound/2), value);
	}
}



