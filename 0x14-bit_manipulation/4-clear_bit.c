#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to be operated
 * @index: position index to be set to zero
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;
	unsigned int hold;

	hold = index;
	if (index > 64)
	{
		return (-1);
	}

	for (temp = 1; hold > 0; temp *= 2, hold--)
		;
	if ((*n >> index) & 1)
		*n -= temp;

	return (1);
}
