#include "main.h"

/**
 * _isdigit - checks for a digit(0 through 9)
 * @c: int type param
 * Return: 1 if c is digit and 0 otherwise
 */

int _isdigit(int c)
{
	int result;

	if (c > 47 && c < 58)
		result = 1;
	else
		result = 0;
	return (result);
}
