#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: integer number of element of the array @n
 */

void reverse_array(int *a, int n)
{int i, j, l, h;
j = (n - 1);
	for (l = (n - 1), i = 0; n / 2 > i; i++, l--)
	{
		h = a[i];
		*(a + i) = a[l];
		*(a + (j - i)) = h;
	}
}
