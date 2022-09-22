#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer n
 */

void tens(int n);
void hundred(int n);
void thousand(int n);
void ten_thousand(int n);
void hun_thousand(int n);

void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;

		_putchar('-');
	}

	if (n > 9 && n < 100)
	{
		hundred(n);
	}

	else if (n > 99 && n < 1000)
	{
		thousand(n);
	}

	else if (n > 999 && n < 10000)
	{
		ten_thousand(n);
	}

	else if (n > 9999 && n < 100000)
	{
		hun_thousand(n);
	}

	else
	tens(n);
}

/**
 * tens - writes out integer from 0 to 9
 * @n: integer n
 */

void tens(int n)
{
	_putchar(n + '0');
}

/**
 * hundred - writes out integer from 10 to 99
 * @n: integer n
 */

void hundred(int n)
{
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
}

/**
 * thousand - write out integer from 100 to 999
 * @n: integer n
 */

void thousand(int n)
{
	int l;

	_putchar((n / 100) + '0');
	l = n % 100;
	if (l > 9 && l < 100)
		hundred(l);
	else
	{
		_putchar('0');
		_putchar(l + '0');
	}
}

/**
 * ten_thousand - write out integer from 1000 to 9999
 * @n: integer n
 */

void ten_thousand(int n)
{
	int l;

	_putchar((n / 1000) + '0');
	l = n % 1000;

	if (l > 99 && l < 1000)
		thousand(l);


	else if (l > 9 && l < 100)
	{
		_putchar('0');
		hundred(l);
	}

	else
	{
		_putchar('0');
		_putchar('0');
		tens(l);
	}
}

/**
 * hun_thousand - writes out integer from 1000 to 9999
 * @n: integer n
 */

void hun_thousand(int n)
{int l;

_putchar((n / 10000) + '0');
l = n % 10000;

	if (l > 999 && l < 10000)
		ten_thousand(l);


	else if (l > 99 && l < 1000)
	{
		int m;

		_putchar('0');
		m = l % 1000;
		thousand(m);
	}


	else if (l > 9 && l < 100)
	{
		_putchar('0');
		_putchar('0');
		hundred(l);
	}


	else
	{
		_putchar('0');
		_putchar('0');
		_putchar('0');
		tens(l);
	}
}
