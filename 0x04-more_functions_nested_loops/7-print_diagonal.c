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
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			j = 0;
			while (j < n)
			{
				if (i == j)
					_putchar('\\');
				else
					_putchar(' ');
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
}
