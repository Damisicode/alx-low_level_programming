#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * printchr - prints character datatype
 * @list - va_list passed to the function
 */

void printchr(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * printint - prints integer datatype
 * @list: va_list passed to function
 */

void printint(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * printstr - prints string type
 * @list: va_list passed to function
 */

void printstr(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * printflt - prints float datatype
 * @list: va_list passed to function
 */

void printflt(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_all - prints all type of datatype passed to it
 * @format: argument type to be printed
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i, j;
	char *sep;

	checker type_list[] = {
		{ "c", printchr },
		{ "f", printflt },
		{ "s", printstr },
		{ "i", printint }
	};

	i = 0;
	sep = "";
	va_start (ap, format);
	while (format != NULL && format[i / 4] != '\0')
	{
		j = i % 4;
		if (type_list[j].type[0] == format[i / 4])
		{
			printf("%s", sep);
			type_list[j].f(ap);
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
