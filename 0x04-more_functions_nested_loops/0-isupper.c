#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: int type number
 * Return: 1 if c is uppercase and returns 0 otherwise
 */

int _isupper(int c)
{int result;
if ((c < 91) & (c > 64))
result = 1;
else
result = 0;
return (result);
}
