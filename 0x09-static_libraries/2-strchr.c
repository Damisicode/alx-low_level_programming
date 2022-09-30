#include "main.h"

/**
 * *_strchr - return first occurence of c in string s
 * @s: charater string
 * @c: character to be located
 * Return: pointer to first location of c
 */

char *_strchr(char *s, char c)
{
	unsigned int i;
	char *p;

	p = s;
	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (p + i);
	return ('\0');
}
