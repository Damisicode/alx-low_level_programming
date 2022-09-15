#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: int type number
 * Description: Provide function similar to the standard library isupper
 * Return: 1 if c is uppercase and returns 0 otherwise
 */

int _isupper(int c)
{
if ((c < 91) & (c > 64))
return(1);
return (0);
}
