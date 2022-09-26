#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: character string
 * @c: character to be located
 * Return: pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
	char ch[100];
	char *ptr;
	unsigned int i, j, l;

	ptr = ch;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
		{
			for (j = i, l = 0; s[i] != '\0'; j++, l++)
				ch[l] = s[j];
			return (ptr);
		}
	return ('\0');
}
