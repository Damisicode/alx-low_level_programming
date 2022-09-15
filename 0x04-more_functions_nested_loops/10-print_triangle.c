#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: int size
 * Return: 0
 */

void print_triangle(int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
		if (((size - (j + 2))) >= i)
		_putchar(' ');
		else
		_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
	return (0);
}
