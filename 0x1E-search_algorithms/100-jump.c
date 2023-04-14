#include "search_algos.h"
#include <math.h>

/*
 * 
 */

int jump_search(int *array, size_t size, int value)
{
	size_t a= 0, i;
	size_t b = sqrt(size);
	
	printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	while (array[b] < value) {
		if (b > size) {
			return -1;
		}
		a = b;
		b = b + sqrt(size);
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", a, b);
	for (i = a; i < b+1; i++) {
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value) {
			return i;
		}
	}

	return -1;
}

