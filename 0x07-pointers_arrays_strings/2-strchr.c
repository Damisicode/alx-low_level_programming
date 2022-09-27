#include "main.h"

/**
 * *_strchr - returns first location of a character
 * @s: charater string
 * @c: character to be located
 * Return: pointer to first location of c
 */

char *_strchr(char *s, char c)
{
	int i;
	char *ptr;

	ptr = s;
	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (ptr + i);

	return (NULL);
}
