#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: string to be concatenated
 * @src: string where @dest is concatenated
 * Return: final string
 */

char *_strcat(char *dest, char *src)
{int i, j, l;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (l = i, j = 0; src[j] != '\0'; j++, l++)
		*(dest + l) = src[j];
	dest[l] = '\0';

	return (dest);
}
