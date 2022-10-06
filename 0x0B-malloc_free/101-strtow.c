
#include <stdlib.h>
#include "main.h"

/**
 * str_len - gives the length of a string
 * @str: string to be measured
 * Return: integer length of string
 */

int str_len(char str[])
{
	int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * word_length - measures the number of words in a sentence
 * @str: string to be measured
 * Return: integer number of words
 */

int word_length(char *str)
{
	int i, words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] == ' ' && *(str + i - 1) != ' ' && i != 0)
			words++;
		i++;
	}
	return (words++);
}

/**
 * strtow - splits a string into words
 * @str: string to be splitted
 * Return: Doouble pointer to the formatted strings
 */

char **strtow(char *str)
{
	int i, j, l, m, n, size;
	char **ptr;

	if (str == NULL || *str == '\0')
		return (NULL);

	ptr = (char **)malloc(sizeof(char *) * (word_length(str) + 1));

	if (ptr == NULL)
		return (NULL);

	i = 0;
	l = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\0')
		{
			l = i;
			for (j = 0; str[l] != ' '; j++)
				l++;
			size = j;

			ptr[n] = (char *)malloc(sizeof(char) * size + 1);

			if (ptr[n] == NULL)
				return (NULL);

			m = 0;
			while (m < size)
			{
				ptr[n][m] = str[i];
				i++;
				m++;
			}

			ptr[n][m] = '\0';
			n++;
		}
		i++;
	}
	ptr[n] = '\0';

	return (ptr);
}
