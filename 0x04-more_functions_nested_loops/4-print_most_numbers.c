#include "main.h"

/**
 * print_numbers - prints numbers from 0 - 9 except 2 and 4
 * and followed by a new line
 * Return: 0
 */

void print_most_numbers(void)
{
	int i;

	i = -1;
	while (i < 10)
	{
	i++;
	if ((i / 2 == 1) && (i / 2 == 2))
		continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
