#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: string separator
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *ptr;

	va_start (ap, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg (ap, char *);
		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);
		if (i < n - 1)
			if (separator != NULL)
				printf("%s", separator);
	}

	printf("\n");
	va_end (ap);
}
