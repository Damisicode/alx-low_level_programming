#include "main.h"

/**
 * *rot13 - encode string into rot13
 * @c: string to be encoded
 *
 * Return: character encoded
 */

char *rot13(char *c)
{
	int i, j;
	char arr[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *arra[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *p;
	p = c;

	for (i = 0; p[i] != '\0'; i++)
		for (j = 0; j < 53; j++)
			if (p[i] == arr[j])
			  *(p + i) = arra[j];

	return (p);
}
