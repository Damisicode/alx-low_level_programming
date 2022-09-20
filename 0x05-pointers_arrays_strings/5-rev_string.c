#include "main.h"

/**
 * rev_string - returns a string in reverse order followed by newline
 * @s: character array to be printed
 */

void rev_string(char *s)
{
int i, j, l;
	char a;

	for (i = 0; s[i] != '\0'; i++)
		;

	l = i;
	for (i--, j = 0; j < l / 2; i--, j++)
	{a = s[j];
	    s[j] = s[i];
	    s[i] = a;
	}
}
