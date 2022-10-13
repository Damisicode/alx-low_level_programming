#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all parameter
 * @n: number of unsigned int to be summed up
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
  va_list ap;
  int sum;
  unsigned int i;

  va_start (ap, n);

  sum = 0;
  for (i = 0; i < n; i++)
    sum += va_arg (ap, int);

  va_end(ap);
  return (sum);
}
