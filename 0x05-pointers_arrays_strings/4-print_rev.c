#include "main.h"

/**
 * _puts - prints a string followed by newline
 * @str: character array to be printed
 */

void print_rev(char *s)
{int j;

for (j = _strlen(s); *(s + j) >= 0; j--)
	{char k = *(s + j);
		_putchar(k);
	}
_putchar('\n');
}
