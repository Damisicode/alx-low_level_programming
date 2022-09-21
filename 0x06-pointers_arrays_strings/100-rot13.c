#include "main.h"

/**
 * *rot13 - encode string into rot13
 * @c: string to be encoded
 *
 * Return: character encoded
 */

char *rot13(char *c)
{
	int i, j, p;
	char arr[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arra[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
		for (j = 0; j < 53; j++)
			if (c[i] == arr[j])
				c[i] = arra[j];

	return (c);
}
