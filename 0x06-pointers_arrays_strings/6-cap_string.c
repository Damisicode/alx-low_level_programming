#include "main.h"

/**
 * *cap_string - changes all lowercase letters of a string to uppercase
 * @c: string
 *
 * Return: character array changed
 */

char *cap_string(char *c)
{
	int i, j;
char arr[13] = {
' ', '\n', '\t', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if ((c[i - 1] == arr[j]) && (c[i] > 96 && c[i] < 123))
			{
				c[i] -= 32;
			}

			else if (c[0] > 96 && c[0] < 123)
			c[0] -= 32;
		}
	}
return (c);
}
