#include "main.h"

/**
 * *_strpbrk - searches a string for any set of bytes
 * @s: string
 * @accept: string
 * Return: pointer to first location the matches
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr;

	ptr = s;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				return (ptr + i);

	return ('\0');
}
