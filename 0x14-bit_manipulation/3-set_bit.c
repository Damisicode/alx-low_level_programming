#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to be operated
 * @index: position index of bit to be set to 1
 * Return: 1 if it worked, or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	if (index > 64)
	{
		return (-1);
	}

	for (temp = 1; index > 0; temp *= 2, index--)
		;
	*n += temp;

	return (1);
}
