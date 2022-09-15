#include "main.h"

/**
 * main - function that checks for uppercase character
 * Description: Provide function similar to the standard library isupper
 * Return: 1 if c is uppercase
 * Returns 0 otherwise
 */

int _isupper(int c);
{
	int diff = 'a' - 'A';
	if ((c < 90) & (c > 64))
	{
		return (1);
	}

	else
	{
	        return (0);
	}
}
