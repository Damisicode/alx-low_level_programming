#include "main.h"

/**
 * _puts - prints a string followed by newline
 * @str: character array to be printed
 */

void _puts(char *str)
{
	int j;

	for (j = 0; *(str + j); j++)
	{char k = *(str + j);
		_putchar(k);
	}
	_putchar('\n');
}
