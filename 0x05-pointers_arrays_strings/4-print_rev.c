#include "main.h"

/**
 * _puts - prints a string followed by newline
 * @str: character array to be printed
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (i--; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
