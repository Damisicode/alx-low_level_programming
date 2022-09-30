#include "main.h"

/**
 * *_memcpy - fills memory with a constant byte
 * @dest: character buffer
 * @src: character datatype
 * @n: unsigned integer
 * Return: pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
