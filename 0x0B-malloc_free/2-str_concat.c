#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: target string
 * @s2: string to be concatenated
 * Return: target string s1
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, s1_len, s2_len, length;

	for (i = 0; s1[i]; i++)
		;
	s1_len = i;

	for (j = 0; s2[j]; j++)
		;
	s2_len = j;

	length = s1_len + s2_len + 1;
	ptr = malloc(sizeof(char) * length);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];

	for (i = 0; s2[i]; i++)
		ptr[i + s1_len] = s2[i];

	ptr[length] = '\0';

	return (ptr);
}
