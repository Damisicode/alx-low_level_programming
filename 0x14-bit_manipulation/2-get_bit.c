#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be checked
 * @index: position index to be checked
 * Return: the value of the index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp;
	int shifts, pos;

	pos = index;
	if (n == 0)
	{
		return (-1);
	}

	for (temp = n, shifts = 0; (temp >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
	{
		if (shifts == pos)
		{
			if ((n >> shifts) & 1)
				return (1);
			else
				return (0);
		}
	}
	return (-1);
}
