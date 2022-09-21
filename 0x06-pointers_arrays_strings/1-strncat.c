#include "main.h"

/**
 * *_strncat - concatenates two strings using at most @n bytes
 * @dest: target string
 * @src: string to be concatenated
 * @n: number of bytes
 *
 * Return: concatenated string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
  int i, j, l;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (l = i, j = 0; src[j] != '\0' && j < n; l++, j++)
		*(dest + l) = src[j];
	dest[l] = '\0';

	return (dest);
}
