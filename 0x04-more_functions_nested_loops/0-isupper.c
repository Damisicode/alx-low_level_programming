#include "main.h"

/**
 * main - function that checks for uppercase character
 * Description: Provide function similar to the standard library isupper
 * Return: 1 if c is uppercase and returns 0 otherwise
 */

int _isupper(int c)
{
        int result;
	if ((c < 90) & (c > 64))
	  result = 1;
	else
	  result = 0;
	return (result);
}
