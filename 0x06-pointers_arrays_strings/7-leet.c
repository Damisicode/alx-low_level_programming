#include "main.h"

/**
 * *leet - encode string into 1337
 * @c: string to be encoded
 *
 * Return: character encoded
 */

char *leet(char *c)
{
	int i, j, p;
	char arr[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char arra[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; c[i] != '\0'; i++)
		for (j = 0; j < 5; j++)
		{
			p = j + 5;
			if (c[i] == arr[j] || c[i] == arr[p])
				c[i] = arra[j];
		}

	return (c);
}
