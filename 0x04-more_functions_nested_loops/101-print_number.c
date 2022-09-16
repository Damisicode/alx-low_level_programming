#include "main.h"

/**
 * print_number - Function prints an integer
 * @n: int type number
 * Return: 0
 */

void thousand(int n);
void tens(int n);
void hundred(int n);
void ten_thousand(int n);

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (((n > 9) && (n < 100)) || ((n < -9) && (n > -100)))
		hundred(n);

	else if (((n > 99) && (n < 1000)) || ((n < -99) && (n > -1000)))
		thousand(n);

	else if (((n > 999) && (n < 10000)) || ((n < -999) && (n > -10000)))
		ten_thousand(n);
	else
		tens(n);
}

/**
 * thousand - Function prints out thousand
 * @n: int type number
 */

void thousand(int n)
{
	int l;

	_putchar ((n / 100) + '0');
	l = (n % 100);
	if (((l > 9) && (l < 100)) || ((n < -9) && (n > -100)))
	{
		_putchar ((l / 10) + '0');
		_putchar ((l % 10) + '0');
	}

	else
	{
		_putchar ('0');
		_putchar (l + '0');
	}
}

/**
 * tens - prints integer numbers in tens
 * @n: int type number
 */

void tens(int n)
{
	_putchar(n + '0');
}

/**
 * hundred - prints integer numbers in hundreds
 * @n: int type number
 */

void hundred(int n)
{
	_putchar ((n / 10) + '0');
	_putchar ((n % 10) + '0');
}

/**
 * ten_thousand - prints integer numbers in ten thousands
 * @n: int type number
 */

void ten_thousand(int n)
{
	int l;

	_putchar ((n / 1000) + '0');
	l = (n % 1000);

	if (((l > 99) && (l < 1000)) || ((l < -99) && (l > -1000)))
	{
		int m;

		_putchar ((l / 100) + '0');
		m = (n % 100);

		if (((m > 9) && (m < 100)) || ((m < -9) && (m > -100)))
		{
			_putchar ((m / 10) + '0');
			_putchar ((m % 10) + '0');
		}

		else
		{
			_putchar('0');
			_putchar(m + '0');
		}
	}

	else if (((l > 9) && (l < 100)) || ((l < -9) && (l > -100)))
	{
		_putchar ('0');
		_putchar ((l / 10) + '0');
		_putchar ((l % 10) + '0');
	}

	else
	{
		_putchar ('0');
		_putchar ('0');
		_putchar (l + '0');
	}
}
