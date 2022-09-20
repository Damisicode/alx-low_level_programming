#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: char pointer copied to
 * @src: char pointer to be copied from
 *
 * Return: character pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, l, j, k, n, m;

	for (j = 0; dest[j] != '\0'; j++)
		;
	l = j;

	for (k = 0; src[k] != '\0'; k++)
		;
	m = ++k;

	for (i = 0; i < m; i++)
	{
		n = l + i;
		*(dest + n) = src[i];
	}

	return (dest);
}
