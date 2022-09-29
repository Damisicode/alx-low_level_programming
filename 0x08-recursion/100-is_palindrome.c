#include "main.h"

/**
 * _strlen_recursion - calculates the length of a string
 * @s: string to be used
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}

/**
 * checker - checks if a string is a palindrome
 * @s: string to be checked
 * @start: start index
 * @end: end index
 * @res: indicates if a string is a palindrome
 */

void checker(char *s, int start, int end, int *res)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*res *= 1;
		else
			*res *= 0;
		checker(s, start + 1, end - 1, res);
	}
}

/**
 * is_palindrome - determine if a string is the same when reversed
 * @string: string to be checked
 * Return: 1 if the string is palindrome and 0 if the string is not palindrome
 */

int is_palindrome(char *s)
{
	int res = 1;

	checker(s, 0, _strlen_recursion(s) - 1, &res);

	return (res);
}
