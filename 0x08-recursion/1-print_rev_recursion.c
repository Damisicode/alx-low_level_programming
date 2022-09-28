#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string to be printed
 */

void _print_rev_recursion(char *s)
{
	if (s[0] == "\n")
		_putchar('\n');
	else
	{
		_putchar(_print_rev_recursion(s + 1));
	}
}

int _strlen(char *s)
{
  
