#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer n
 */

void print_number(int n)
{
	int power, l, k, j, m;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	power = 0;

	l = n;
	while (l / 10 != 0)
	{
		l /= 10;
		power++;
	}

	m = n;
	while (power >= 0)
	{
		k = 1;

		for (j = power; j > 0; j--)
			k *= 10;
		_putchar(m / k + '0');
		m %= k;

		power--;
	}
}
