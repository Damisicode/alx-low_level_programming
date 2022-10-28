#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits to be flipped in other to get
 *             one number from another
 * @n: first number to be checked
 * @m: second number to be checked
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp_n;
	unsigned long int temp_m;
	int count = 0, i, j, greater;

	temp_n = n;
	temp_m = m;
	for (i = 1; (temp_n >>= 1) > 0; i++)
		;

	for (j = 1; (temp_m >>= 1) > 0; j++)
		;
	greater = i > j ? i : j;
	for (; greater >= 0; greater--)
	{
		if (((n >> greater) & 1) != ((m >> greater) & 1))
		{
			count++;
		}
	}

	return (count);
}
