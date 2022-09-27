#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: string
 * @needle: string
 * Return: pointer to first location the matches
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k, l, con;
	char *ptr;

	ptr = haystack;
	con = 0;
	for (l = 0; needle[l] != '\0'; l++)
		;
	k = l;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
			if (haystack[i + j] == needle[j])
				con++;
		if (con == k && k != 0)
			return (ptr + i);
	}

	return ('\0');
}
