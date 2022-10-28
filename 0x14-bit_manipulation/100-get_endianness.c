#include "main.h"

/**
 * get_endianness - checks for endianess
 * Return: 0 if big endian and 1 if little endian
 */

int get_endianness(void)
{
	unsigned int n = 1;
	char *p = (char *) &n;

	if (p)
	{
		return (1);
	}
	else
		return (0);
}
