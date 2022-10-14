#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void printstr(va_list list);
void printchr(va_list list);
void printflt(va_list list);
void printint(va_list list);

typedef struct check
{
	char *type;
	void (*f)();
} checker;
#endif /* #ifndef VARIADIC_FUNCTIONS_H */
