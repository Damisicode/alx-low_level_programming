#include "main.h"

/**
 * print_line - draws a straight line in a terminal
 * @n: integer parameter
 * Return: 0
 */

void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
