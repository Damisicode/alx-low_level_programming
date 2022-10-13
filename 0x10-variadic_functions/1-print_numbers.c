#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by newline
 * @separator: string to be printed between numbers
 * @n: number of strings to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start (ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg (ap, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end (ap);
}
