#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i, j, l, n;

	for (i = 0; str[i] != '\0'; i++)
		;

	l = i;
	n = (l - 1) / 2;
	for (j = 0; l >= j; j++)
		if ((j > l / 2) && (j > n))
			_putchar(str[j]);

	_putchar('\n');
}
