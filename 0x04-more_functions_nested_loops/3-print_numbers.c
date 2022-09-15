#include "main.h"

/**
 * print_numbers - prints numbers from 0 - 9 followed by a new line
 * Return: 0
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		_putchar('\n');
		i++;
	}
}
