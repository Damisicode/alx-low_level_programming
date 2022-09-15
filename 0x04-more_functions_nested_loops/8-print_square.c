#include "main.h"

/**
 * print_square - draws a square on the terminal
 * @size: integer parameter
 * Return: 0
 */

void print_square(int size)
{
	int j;

	j = 0;
	if (size <= 0)
		_putchar('\n');
	else
	{
		while (size > 0)
		{
			j = size;
			while (j > 0)
			{
				_putchar('#');
				j--;
			}
			_putchar('\n');
			size--;
		}
	}
}
