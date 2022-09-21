#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @c: string
 *
 * Return: character array changed
 */

char *string_toupper(char *c)
{
	int i, delt = 'a' - 'A';

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] > 96 && c[i] < 123)
		{
			c[i] -= delt;
		}
	}

	return (c);
}
