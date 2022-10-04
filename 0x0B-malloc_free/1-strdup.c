#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to be duplicated
 * Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, j;

	for (i = 0; str[i]; i++)
		;
	j = i;
	ptr = malloc(sizeof(char) * j);
	if (ptr == NULL)
		return ('\0');

	for (i = 0; str[i]; i++)
		ptr[i] = str[i];
	return (ptr);
}
