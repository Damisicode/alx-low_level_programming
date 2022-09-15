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
		while (n > 0)
		{
			j = i;
			while (j > 0)
			{
				_putchar(' ');
				j--;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
			n--;
		}
	}
}
