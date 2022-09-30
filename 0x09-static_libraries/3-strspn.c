#include "main.h"

/**
 * _strspn - returns the length of a prefix substring
 * @s: string
 * @accept: prefix substring
 * Return: length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, counter, res;

	counter = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		res = counter;
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				counter++;
		if (res == counter)
			break;
	}
	return (counter);
}
