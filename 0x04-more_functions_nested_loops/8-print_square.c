#include "main.h"

/**
 * print_square - draws a square on the terminal
 * @size: integer parameter
 * Return: 0
 */

void print_square(int size)
{
int i, j;

	j = 0;
	if (size <= 0)
		_putchar('\n');
	else
	{
		while (size > j)
		{
			i = 0;
			while (size > i)
			{
				_putchar('#');
				i++;
			}
			_putchar('\n');
			j++;
		}
	}
}
