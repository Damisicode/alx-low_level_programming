#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: integer parameter
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (i == j)
				_putchar('\\');
			else if (i > j)
				_putchar(' ');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
