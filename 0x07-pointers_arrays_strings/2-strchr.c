#include "main.h"

/**
 * *_strchr(char *s, char c)
 * @s: charater string
 * @c: character to be located
 * Return: pointer to first location of c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
	return (s + 1);
}
