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
	unsigned long int temp;
	int counter;

	temp = n ^ m;
	counter = 0;

	while (temp)
	{
		counter++;
		temp = temp & (temp - 1);
	}

	return (counter);
}
