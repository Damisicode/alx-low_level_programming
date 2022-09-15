#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 - 14,
 * followed by a new line
 * Return: 0
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	j = 0;
	while (i < 10)
	{
		while (j < 14)
		{
			_putchar(i + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
