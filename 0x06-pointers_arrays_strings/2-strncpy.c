#include "main.h"

/**
 * *_strncpy - copies string @src to @dest using at most @n bytes
 * @dest: target string
 * @src: string to be copy
 * @n: number of bytes
 *
 * Return: target string @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j, l;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (l = 0, j = 0; src[j] != '\0' && j < n; l++, j++)
		*(dest + l) = src[j];
	if (j < n)
	dest[l] = '\0';
	dest[l] = '\0';
	
	return (dest);
}
