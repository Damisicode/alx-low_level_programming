#include "main.h"

/**
 * _sqrt_recursion - gives the square root of integer passed
 * @n: integer
 * Return: square root of integer
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}

/**
 * _sqrt - gives the square root of the integer without checking
 * @n: integer
 * @num: integer
 * Return: the square root
 */

int _sqrt(int n, int num)
{
	if (n > num / 2)
		return (-1);
	else if (n * n == num)
		return (n);
	return (_sqrt(n + 1, num));
}
