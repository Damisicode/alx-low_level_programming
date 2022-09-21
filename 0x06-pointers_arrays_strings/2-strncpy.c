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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
