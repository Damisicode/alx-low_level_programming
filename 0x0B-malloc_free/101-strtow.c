#include <stdlib.h>
#include "main.h"

/**
 * str_len - measures the length of a string
 * @str: string to be measured
 * Return: integer number of words
 */

int str_len(char *str)
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
		if (str[i] == ' ' && *(str + i - 1) != ' ')
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
	char **ptr;
	int i, j, temp, size, words;

	i = 0; j = 0; temp = 0; size = 0; words = word_length(str);
	if (words == 0) return (NULL);
	ptr = (char **)malloc(sizeof(char *) * (words + 1));
	if (ptr != NULL){
		while (i <= str_len(str) && words){
			if ((str[i] != ' ') && (str[i] != '\0'))
				size++;
			else if (((str[i] == ' ') || (str[i] == '\0')) &&
				 i && (str[i - 1] != ' '))
			{
				ptr[j] =
					(char *)malloc(sizeof(char) * size + 1);
				if (ptr[j] != NULL){
					while (temp < size){
						ptr[j][temp] =
							str[(i - size) + temp];
						temp++;
					}
					ptr[j][temp] = '\0';
					size = temp = 0;
					j++;
				}
				else
				{
					while (j-- >= 0)
						free(ptr[j]);
					free(ptr);
					return (NULL);
				}
			}
			i++;
		}
		ptr[words] = NULL;
		return (ptr);
	}
	else
		return (NULL);
}
