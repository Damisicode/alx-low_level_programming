#include "main.h"

/**
 * *rot13 - encode string into rot13
 * @c: string to be encoded
 *
 * Return: character encoded
 */

char *rot13(char *c)
{
	int i;
	char arr[53] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char arra[53] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
		if ((c[i] > 64 && c[i] < 91) || (c[i] > 96 && c[i] < 123))
			c[i] = (c[i] - 64 > 25) ?
				arra[c[i] - 97] : arr[c[i] - 65];

	return (c);
}
